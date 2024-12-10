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
 * This DF represents a common message header for application and facilities layer messages.
 * It is included at the beginning of an ITS message as the message header.
 *
 * It shall include the following components: 
 *
 * @field protocolVersion: version of the ITS message.
 *
 * @field messageId: type of the ITS message.
 *
 * @field stationId: the identifier of the ITS-S that generated the ITS message.
 *
 * @category: Communication information
 * @revision:  update in V2.1.1: messageID and stationID changed to messageId and stationId; messageId is of type MessageId.
 *
ItsPduHeader ::= SEQUENCE {
    protocolVersion    OrdinalNumber1B,
    messageId          MessageId,
    stationId          StationId
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_ItsPduHeader.h>
#include <etsi_its_cam_ts_conversion/convertMessageId.h>
#include <etsi_its_cam_ts_conversion/convertOrdinalNumber1B.h>
#include <etsi_its_cam_ts_conversion/convertStationId.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/ItsPduHeader.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/its_pdu_header.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_ItsPduHeader(const cam_ts_ItsPduHeader_t& in, cam_ts_msgs::ItsPduHeader& out) {
  toRos_OrdinalNumber1B(in.protocolVersion, out.protocol_version);
  toRos_MessageId(in.messageId, out.message_id);
  toRos_StationId(in.stationId, out.station_id);
}

void toStruct_ItsPduHeader(const cam_ts_msgs::ItsPduHeader& in, cam_ts_ItsPduHeader_t& out) {
  memset(&out, 0, sizeof(cam_ts_ItsPduHeader_t));
  toStruct_OrdinalNumber1B(in.protocol_version, out.protocolVersion);
  toStruct_MessageId(in.message_id, out.messageId);
  toStruct_StationId(in.station_id, out.stationId);
}

}
