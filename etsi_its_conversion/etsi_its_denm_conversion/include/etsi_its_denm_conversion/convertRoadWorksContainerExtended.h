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
  asn1/raw/denm_en302637_3/DENM-PDU-Descriptions.asn \
  asn1/raw/denm_en302637_3/cdd/ITS-Container.asn \
  -t \
  denm \
  -o \
  etsi_its_conversion/etsi_its_denm_conversion/include/etsi_its_denm_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
RoadWorksContainerExtended ::= SEQUENCE {
	lightBarSirenInUse LightBarSirenInUse OPTIONAL,
	closedLanes ClosedLanes OPTIONAL,
	restriction RestrictedTypes OPTIONAL,
	speedLimit SpeedLimit OPTIONAL,
	incidentIndication CauseCode OPTIONAL,
	recommendedPath ItineraryPath OPTIONAL,
	startingPointSpeedLimit DeltaReferencePosition OPTIONAL,
	trafficFlowRule TrafficRule OPTIONAL,
	referenceDenms ReferenceDenms OPTIONAL
 }
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_coding/denm_RoadWorksContainerExtended.h>
#include <etsi_its_denm_conversion/convertCauseCode.h>
#include <etsi_its_denm_conversion/convertClosedLanes.h>
#include <etsi_its_denm_conversion/convertDeltaReferencePosition.h>
#include <etsi_its_denm_conversion/convertItineraryPath.h>
#include <etsi_its_denm_conversion/convertLightBarSirenInUse.h>
#include <etsi_its_denm_conversion/convertReferenceDenms.h>
#include <etsi_its_denm_conversion/convertRestrictedTypes.h>
#include <etsi_its_denm_conversion/convertSpeedLimit.h>
#include <etsi_its_denm_conversion/convertTrafficRule.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/RoadWorksContainerExtended.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/road_works_container_extended.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_RoadWorksContainerExtended(const denm_RoadWorksContainerExtended_t& in, denm_msgs::RoadWorksContainerExtended& out) {
  if (in.lightBarSirenInUse) {
    toRos_LightBarSirenInUse(*in.lightBarSirenInUse, out.light_bar_siren_in_use);
    out.light_bar_siren_in_use_is_present = true;
  }
  if (in.closedLanes) {
    toRos_ClosedLanes(*in.closedLanes, out.closed_lanes);
    out.closed_lanes_is_present = true;
  }
  if (in.restriction) {
    toRos_RestrictedTypes(*in.restriction, out.restriction);
    out.restriction_is_present = true;
  }
  if (in.speedLimit) {
    toRos_SpeedLimit(*in.speedLimit, out.speed_limit);
    out.speed_limit_is_present = true;
  }
  if (in.incidentIndication) {
    toRos_CauseCode(*in.incidentIndication, out.incident_indication);
    out.incident_indication_is_present = true;
  }
  if (in.recommendedPath) {
    toRos_ItineraryPath(*in.recommendedPath, out.recommended_path);
    out.recommended_path_is_present = true;
  }
  if (in.startingPointSpeedLimit) {
    toRos_DeltaReferencePosition(*in.startingPointSpeedLimit, out.starting_point_speed_limit);
    out.starting_point_speed_limit_is_present = true;
  }
  if (in.trafficFlowRule) {
    toRos_TrafficRule(*in.trafficFlowRule, out.traffic_flow_rule);
    out.traffic_flow_rule_is_present = true;
  }
  if (in.referenceDenms) {
    toRos_ReferenceDenms(*in.referenceDenms, out.reference_denms);
    out.reference_denms_is_present = true;
  }
}

void toStruct_RoadWorksContainerExtended(const denm_msgs::RoadWorksContainerExtended& in, denm_RoadWorksContainerExtended_t& out) {
  memset(&out, 0, sizeof(denm_RoadWorksContainerExtended_t));
  if (in.light_bar_siren_in_use_is_present) {
    out.lightBarSirenInUse = (denm_LightBarSirenInUse_t*) calloc(1, sizeof(denm_LightBarSirenInUse_t));
    toStruct_LightBarSirenInUse(in.light_bar_siren_in_use, *out.lightBarSirenInUse);
  }
  if (in.closed_lanes_is_present) {
    out.closedLanes = (denm_ClosedLanes_t*) calloc(1, sizeof(denm_ClosedLanes_t));
    toStruct_ClosedLanes(in.closed_lanes, *out.closedLanes);
  }
  if (in.restriction_is_present) {
    out.restriction = (denm_RestrictedTypes_t*) calloc(1, sizeof(denm_RestrictedTypes_t));
    toStruct_RestrictedTypes(in.restriction, *out.restriction);
  }
  if (in.speed_limit_is_present) {
    out.speedLimit = (denm_SpeedLimit_t*) calloc(1, sizeof(denm_SpeedLimit_t));
    toStruct_SpeedLimit(in.speed_limit, *out.speedLimit);
  }
  if (in.incident_indication_is_present) {
    out.incidentIndication = (denm_CauseCode_t*) calloc(1, sizeof(denm_CauseCode_t));
    toStruct_CauseCode(in.incident_indication, *out.incidentIndication);
  }
  if (in.recommended_path_is_present) {
    out.recommendedPath = (denm_ItineraryPath_t*) calloc(1, sizeof(denm_ItineraryPath_t));
    toStruct_ItineraryPath(in.recommended_path, *out.recommendedPath);
  }
  if (in.starting_point_speed_limit_is_present) {
    out.startingPointSpeedLimit = (denm_DeltaReferencePosition_t*) calloc(1, sizeof(denm_DeltaReferencePosition_t));
    toStruct_DeltaReferencePosition(in.starting_point_speed_limit, *out.startingPointSpeedLimit);
  }
  if (in.traffic_flow_rule_is_present) {
    out.trafficFlowRule = (denm_TrafficRule_t*) calloc(1, sizeof(denm_TrafficRule_t));
    toStruct_TrafficRule(in.traffic_flow_rule, *out.trafficFlowRule);
  }
  if (in.reference_denms_is_present) {
    out.referenceDenms = (denm_ReferenceDenms_t*) calloc(1, sizeof(denm_ReferenceDenms_t));
    toStruct_ReferenceDenms(in.reference_denms, *out.referenceDenms);
  }
}

}