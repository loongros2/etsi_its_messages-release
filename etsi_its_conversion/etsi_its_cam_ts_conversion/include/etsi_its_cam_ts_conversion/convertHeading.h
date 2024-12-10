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
  asn1/raw/cam_ts103900/CAM-PDU-Descriptions.asn \
  asn1/patched/cam_ts103900/cdd/ETSI-ITS-CDD.asn \
  -t \
  cam_ts \
  -o \
  etsi_its_conversion/etsi_its_cam_ts_conversion/include/etsi_its_cam_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
 * This DF represents the Heading in a WGS84 co-ordinates system.
 * The specific WGS84 coordinate system is specified by the corresponding standards applying this DE.
 *
 * It shall include the following components: 
 * 
 * @field headingValue: the heading value.
 * 
 * @field headingConfidence: the confidence value of the heading value with a predefined confidence level.
 * 
 * @note: this DF is kept for backwards compatibility reasons only. It is recommended to use the @ref Wgs84Angle instead. 
 * @category: Kinematic Information
 * @revision: Description revised in V2.1.1
 *
Heading ::= SEQUENCE {
    headingValue         HeadingValue,
    headingConfidence    HeadingConfidence
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_Heading.h>
#include <etsi_its_cam_ts_conversion/convertHeadingConfidence.h>
#include <etsi_its_cam_ts_conversion/convertHeadingValue.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/Heading.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/heading.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_Heading(const cam_ts_Heading_t& in, cam_ts_msgs::Heading& out) {
  toRos_HeadingValue(in.headingValue, out.heading_value);
  toRos_HeadingConfidence(in.headingConfidence, out.heading_confidence);
}

void toStruct_Heading(const cam_ts_msgs::Heading& in, cam_ts_Heading_t& out) {
  memset(&out, 0, sizeof(cam_ts_Heading_t));
  toStruct_HeadingValue(in.heading_value, out.headingValue);
  toStruct_HeadingConfidence(in.heading_confidence, out.headingConfidence);
}

}