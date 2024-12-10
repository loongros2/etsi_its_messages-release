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
 * This DF provides information about a VRU cluster.
 *
 * It shall include the following components: 
 *
 * @field clusterId: optional identifier of a VRU cluster .
 *
 * @field clusterBoundingBoxShape: optionally indicates the shape of the cluster bounding box.
 *
 * @field clusterCardinalitySize: indicates an estimation of the number of VRUs in the group, i.e. the known members in the cluster + 1 (for the cluster leader) .
 *
 * @field clusterProfiles: optionally identifies all the VRU profile types that are known to be within the cluster.
 * if this component is absent it means that the information is unavailable. 
 *
 * @category: VRU information
 * @revision: Created in V2.1.1
*
VruClusterInformation ::= SEQUENCE { 
   clusterId                  Identifier1B OPTIONAL,
   clusterBoundingBoxShape    Shape (WITH COMPONENTS{..., elliptical ABSENT, radial ABSENT, radialShapes ABSENT}) OPTIONAL,
   clusterCardinalitySize     CardinalNumber1B,
   clusterProfiles            VruClusterProfiles OPTIONAL,
   ...
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_vam_ts_coding/vam_ts_VruClusterInformation.h>
#include <etsi_its_vam_ts_conversion/convertCardinalNumber1B.h>
#include <etsi_its_vam_ts_conversion/convertIdentifier1B.h>
#include <etsi_its_vam_ts_conversion/convertShape.h>
#include <etsi_its_vam_ts_conversion/convertVruClusterProfiles.h>
#ifdef ROS1
#include <etsi_its_vam_ts_msgs/VruClusterInformation.h>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs;
#else
#include <etsi_its_vam_ts_msgs/msg/vru_cluster_information.hpp>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs::msg;
#endif


namespace etsi_its_vam_ts_conversion {

void toRos_VruClusterInformation(const vam_ts_VruClusterInformation_t& in, vam_ts_msgs::VruClusterInformation& out) {
  if (in.clusterId) {
    toRos_Identifier1B(*in.clusterId, out.cluster_id);
    out.cluster_id_is_present = true;
  }
  if (in.clusterBoundingBoxShape) {
    toRos_Shape(*in.clusterBoundingBoxShape, out.cluster_bounding_box_shape);
    out.cluster_bounding_box_shape_is_present = true;
  }
  toRos_CardinalNumber1B(in.clusterCardinalitySize, out.cluster_cardinality_size);
  if (in.clusterProfiles) {
    toRos_VruClusterProfiles(*in.clusterProfiles, out.cluster_profiles);
    out.cluster_profiles_is_present = true;
  }
}

void toStruct_VruClusterInformation(const vam_ts_msgs::VruClusterInformation& in, vam_ts_VruClusterInformation_t& out) {
  memset(&out, 0, sizeof(vam_ts_VruClusterInformation_t));
  if (in.cluster_id_is_present) {
    out.clusterId = (vam_ts_Identifier1B_t*) calloc(1, sizeof(vam_ts_Identifier1B_t));
    toStruct_Identifier1B(in.cluster_id, *out.clusterId);
  }
  if (in.cluster_bounding_box_shape_is_present) {
    out.clusterBoundingBoxShape = (vam_ts_Shape_t*) calloc(1, sizeof(vam_ts_Shape_t));
    toStruct_Shape(in.cluster_bounding_box_shape, *out.clusterBoundingBoxShape);
  }
  toStruct_CardinalNumber1B(in.cluster_cardinality_size, out.clusterCardinalitySize);
  if (in.cluster_profiles_is_present) {
    out.clusterProfiles = (vam_ts_VruClusterProfiles_t*) calloc(1, sizeof(vam_ts_VruClusterProfiles_t));
    toStruct_VruClusterProfiles(in.cluster_profiles, *out.clusterProfiles);
  }
}

}