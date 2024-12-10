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
  asn1/raw/cpm_ts103324/asn/CPM-PDU-Descriptions.asn \
  asn1/raw/cpm_ts103324/asn/CPM-OriginatingStationContainers.asn \
  asn1/raw/cpm_ts103324/asn/CPM-PerceivedObjectContainer.asn \
  asn1/raw/cpm_ts103324/asn/CPM-PerceptionRegionContainer.asn \
  asn1/raw/cpm_ts103324/asn/CPM-SensorInformationContainer.asn \
  asn1/patched/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn \
  -t \
  cpm_ts \
  -o \
  etsi_its_conversion/etsi_its_cpm_ts_conversion/include/etsi_its_cpm_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
 * A position within a geographic coordinate system together with a confidence ellipse. 
 *
 * It shall include the following components: 
 *
 * @field latitude: the latitude of the geographical point.
 *
 * @field longitude: the longitude of the geographical point.
 *
 * @field positionConfidenceEllipse: the confidence ellipse associated to the geographical position.
 *
 * @field altitude: the altitude and an altitude accuracy of the geographical point.
 *
 * @note: this DE is kept for backwards compatibility reasons only. It is recommended to use the @ref ReferencePositionWithConfidence instead. 
 * @category: GeoReference information
 * @revision: description updated in V2.1.1
 *
ReferencePosition ::= SEQUENCE {
    latitude                     Latitude,
    longitude                    Longitude,
    positionConfidenceEllipse    PosConfidenceEllipse,
    altitude                     Altitude
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cpm_ts_coding/cpm_ts_ReferencePosition.h>
#include <etsi_its_cpm_ts_conversion/convertAltitude.h>
#include <etsi_its_cpm_ts_conversion/convertLatitude.h>
#include <etsi_its_cpm_ts_conversion/convertLongitude.h>
#include <etsi_its_cpm_ts_conversion/convertPosConfidenceEllipse.h>
#ifdef ROS1
#include <etsi_its_cpm_ts_msgs/ReferencePosition.h>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs;
#else
#include <etsi_its_cpm_ts_msgs/msg/reference_position.hpp>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#endif


namespace etsi_its_cpm_ts_conversion {

void toRos_ReferencePosition(const cpm_ts_ReferencePosition_t& in, cpm_ts_msgs::ReferencePosition& out) {
  toRos_Latitude(in.latitude, out.latitude);
  toRos_Longitude(in.longitude, out.longitude);
  toRos_PosConfidenceEllipse(in.positionConfidenceEllipse, out.position_confidence_ellipse);
  toRos_Altitude(in.altitude, out.altitude);
}

void toStruct_ReferencePosition(const cpm_ts_msgs::ReferencePosition& in, cpm_ts_ReferencePosition_t& out) {
  memset(&out, 0, sizeof(cpm_ts_ReferencePosition_t));
  toStruct_Latitude(in.latitude, out.latitude);
  toStruct_Longitude(in.longitude, out.longitude);
  toStruct_PosConfidenceEllipse(in.position_confidence_ellipse, out.positionConfidenceEllipse);
  toStruct_Altitude(in.altitude, out.altitude);
}

}