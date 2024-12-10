#!/usr/bin/env python3

# ==============================================================================
# MIT License
#
# Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
# ==============================================================================

import argparse
import glob
import os
import re
import shutil
import subprocess
import tempfile
from typing import List


def parseCli():
    """Parses script's CLI arguments.

    Returns:
        argparse.Namespace: arguments
    """

    parser = argparse.ArgumentParser(
        description="Creates conversion headers from ASN1 definitions.",
        formatter_class=argparse.ArgumentDefaultsHelpFormatter)

    parser.add_argument("files", type=str, nargs="+", help="ASN1 files")
    parser.add_argument("-o", "--output-dir", type=str, required=True, help="output directory")
    parser.add_argument("-td", "--temp-dir", type=str, default=None, help="temporary directory for mounting files to container; uses tempfile by default")
    parser.add_argument("-t", "--type", type=str, required=True, help="ASN1 type")
    parser.add_argument("-di", "--docker-image", type=str, default="ghcr.io/ika-rwth-aachen/etsi_its_messages:rgen", help="rgen Docker image")

    args = parser.parse_args()

    return args

def findDependenciesOfConversionHeaders(parent_file_path: str, type: str, file_list: List[str] = []) -> List[str]:
    # duplicate list to avoid modifying the original list
    new_file_list = file_list.copy()

    # load contents of conversion file
    with open(parent_file_path, 'r') as file:
        lines = file.readlines()
        for line in lines:
            
            if line.startswith(f"#include <etsi_its_{type}_conversion/convert"):
                msg_type = line.split("/")[1].split(".")[0]
                if msg_type not in new_file_list and os.path.isfile(f"{os.path.dirname(parent_file_path)}/{msg_type}.h"):
                    new_file_list.append(msg_type)
                    new_file_list = findDependenciesOfConversionHeaders(f"{os.path.dirname(parent_file_path)}/{msg_type}.h", type, new_file_list)
    
    # make sure there are no duplicates and sort alphabetically
    new_file_list = sorted(list(set(new_file_list)))
    
    return new_file_list

def main():

    args = parseCli()

    # create output directory
    os.makedirs(args.output_dir, exist_ok=True)

    # create temporary directories for running rgen in docker container
    with tempfile.TemporaryDirectory() as temp_input_dir:
        with tempfile.TemporaryDirectory() as temp_output_dir:

            if args.temp_dir is None:
                container_input_dir = temp_input_dir
                container_output_dir = temp_output_dir
            else:
                container_input_dir = os.path.join(args.temp_dir, "input")
                container_output_dir = os.path.join(args.temp_dir, "output")
                os.makedirs(container_input_dir, exist_ok=True)
                os.makedirs(container_output_dir, exist_ok=True)

            # copy input asn1 files to temporary directory
            for f in args.files:
                shutil.copy(f, container_input_dir)

            # run rgen docker container to generate conversion headers
            subprocess.run(["docker", "run", "--rm", "-u", f"{os.getuid()}:{os.getgid()}", "-v", f"{container_input_dir}:/input:ro", "-v", f"{container_output_dir}:/output", args.docker_image, 'conversion-headers', args.type], check=True)

            # add auto-gen info, remove in-file type and message name info (optional)
            for f in glob.glob(os.path.join(container_output_dir, "*.h")):
                with open(f, "r") as file:
                    msg = file.read()

                msg = re.sub(r"^////\s([\w-]+)\s.*\b",
                             "// --- Auto-generated by asn1ToConversionHeader.py -----------------------------",
                             msg,
                             flags=re.MULTILINE)

                with open(f, "w") as file:
                    file.write(msg)

            # move generated conversion headers to output directories
            for f in glob.glob(os.path.join(container_output_dir, "*.h")):
                shutil.move(f, os.path.join(args.output_dir, os.path.basename(f)))

    ## remove all conversion files that are not required
    msg_type = args.type.upper()
    
    # handle special cases
    if args.type == "cpm_ts":
        msg_type = "CollectivePerceptionMessage"
    elif args.type == "cam_ts":
        msg_type = "CAM"
    elif args.type == "vam_ts":
        msg_type = "VAM"

    header_files = findDependenciesOfConversionHeaders(os.path.join(args.output_dir, f"convert{msg_type}.h"), args.type, [f"convert{msg_type}"])

    for f in glob.glob(os.path.join(args.output_dir, "*.h")):
        if os.path.splitext(os.path.basename(f))[0] not in header_files:
            os.remove(f)

if __name__ == "__main__":

    main()