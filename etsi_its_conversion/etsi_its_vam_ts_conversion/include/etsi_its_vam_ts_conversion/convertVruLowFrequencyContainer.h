/** ============================================================================
MIT License

Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
============================================================================= */

/** Auto-generated by https://github.com/ika-rwth-aachen/etsi_its_messages -----
python3 \
  utils/codegen/codegen-py/asn1ToConversionHeader.py \
  asn1/raw/vam-ts103300_3/VAM-PDU-Descriptions.asn \
  asn1/patched/vam-ts103300_3/cdd/ETSI-ITS-CDD.asn \
  -t \
  vam_ts \
  -o \
  etsi_its_conversion/etsi_its_vam_ts_conversion/include/etsi_its_vam_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
 * @details VruLowFrequencyContainer
 * The VRU LF container of the VAM contains potentially slow-changing information of the VRU ITS-S.
 * It is mandatory with higher periodicity as specified in clause 6.2 or when VRU cluster operation container is present.
 * It includes the following components (setting indications are specified in clause 7.3.4 of TS 103 300-3): 
 *
 * @field profileAndSubprofile: profile of the ITS-S that originates the VAM, including sub-profile information. 
 * @field sizeClass: information about the size of the VRU. 
 * @field exteriorLights: status of the most important exterior lights switches of the VRU ITS-S that originates the VAM. 
 *        _(conditional mandatory as specified in clause 7.3.4 of TS 103 300-3)_ 
 * 
 * @category: VRU information
 * @revision: V2.2.1
 *
    VruLowFrequencyContainer ::= SEQUENCE {
        profileAndSubprofile     VruProfileAndSubprofile,
        sizeClass                VruSizeClass OPTIONAL,        
		exteriorLights           VruExteriorLights OPTIONAL,
       ...
    }
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_vam_ts_coding/vam_ts_VruLowFrequencyContainer.h>
#include <etsi_its_vam_ts_conversion/convertVruExteriorLights.h>
#include <etsi_its_vam_ts_conversion/convertVruProfileAndSubprofile.h>
#include <etsi_its_vam_ts_conversion/convertVruSizeClass.h>
#ifdef ROS1
#include <etsi_its_vam_ts_msgs/VruLowFrequencyContainer.h>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs;
#else
#include <etsi_its_vam_ts_msgs/msg/vru_low_frequency_container.hpp>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs::msg;
#endif


namespace etsi_its_vam_ts_conversion {

void toRos_VruLowFrequencyContainer(const vam_ts_VruLowFrequencyContainer_t& in, vam_ts_msgs::VruLowFrequencyContainer& out) {
  toRos_VruProfileAndSubprofile(in.profileAndSubprofile, out.profile_and_subprofile);
  if (in.sizeClass) {
    toRos_VruSizeClass(*in.sizeClass, out.size_class);
    out.size_class_is_present = true;
  }
  if (in.exteriorLights) {
    toRos_VruExteriorLights(*in.exteriorLights, out.exterior_lights);
    out.exterior_lights_is_present = true;
  }
}

void toStruct_VruLowFrequencyContainer(const vam_ts_msgs::VruLowFrequencyContainer& in, vam_ts_VruLowFrequencyContainer_t& out) {
  memset(&out, 0, sizeof(vam_ts_VruLowFrequencyContainer_t));
  toStruct_VruProfileAndSubprofile(in.profile_and_subprofile, out.profileAndSubprofile);
  if (in.size_class_is_present) {
    out.sizeClass = (vam_ts_VruSizeClass_t*) calloc(1, sizeof(vam_ts_VruSizeClass_t));
    toStruct_VruSizeClass(in.size_class, *out.sizeClass);
  }
  if (in.exterior_lights_is_present) {
    out.exteriorLights = (vam_ts_VruExteriorLights_t*) calloc(1, sizeof(vam_ts_VruExteriorLights_t));
    toStruct_VruExteriorLights(in.exterior_lights, *out.exteriorLights);
  }
}

}
