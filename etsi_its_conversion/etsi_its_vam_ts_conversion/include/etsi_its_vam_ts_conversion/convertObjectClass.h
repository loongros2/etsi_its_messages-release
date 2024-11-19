/** ============================================================================
MIT License

Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University
Copyright (c) 2024 Instituto de Telecomunicações, Universidade de Aveiro

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

// --- Auto-generated by asn1ToConversionHeader.py -----------------------------

#pragma once

#include <etsi_its_vam_ts_coding/vam_ts_ObjectClass.h>
#include <etsi_its_vam_ts_conversion/convertOtherSubClass.h>
#include <etsi_its_vam_ts_conversion/convertTrafficParticipantType.h>
#include <etsi_its_vam_ts_conversion/convertVruClusterInformation.h>
#include <etsi_its_vam_ts_conversion/convertVruProfileAndSubprofile.h>
#ifdef ROS1
#include <etsi_its_vam_ts_msgs/ObjectClass.h>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs;
#else
#include <etsi_its_vam_ts_msgs/msg/object_class.hpp>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs::msg;
#endif


namespace etsi_its_vam_ts_conversion {

void toRos_ObjectClass(const vam_ts_ObjectClass_t& in, vam_ts_msgs::ObjectClass& out) {
  switch (in.present) {
  case vam_ts_ObjectClass_PR_vehicleSubClass:
    toRos_TrafficParticipantType(in.choice.vehicleSubClass, out.vehicle_sub_class);
    out.choice = vam_ts_msgs::ObjectClass::CHOICE_VEHICLE_SUB_CLASS;
    break;
  case vam_ts_ObjectClass_PR_vruSubClass:
    toRos_VruProfileAndSubprofile(in.choice.vruSubClass, out.vru_sub_class);
    out.choice = vam_ts_msgs::ObjectClass::CHOICE_VRU_SUB_CLASS;
    break;
  case vam_ts_ObjectClass_PR_groupSubClass:
    toRos_VruClusterInformation(in.choice.groupSubClass, out.group_sub_class);
    out.choice = vam_ts_msgs::ObjectClass::CHOICE_GROUP_SUB_CLASS;
    break;
  case vam_ts_ObjectClass_PR_otherSubClass:
    toRos_OtherSubClass(in.choice.otherSubClass, out.other_sub_class);
    out.choice = vam_ts_msgs::ObjectClass::CHOICE_OTHER_SUB_CLASS;
    break;
  default: break;
  }
}

void toStruct_ObjectClass(const vam_ts_msgs::ObjectClass& in, vam_ts_ObjectClass_t& out) {
  memset(&out, 0, sizeof(vam_ts_ObjectClass_t));

  switch (in.choice) {
  case vam_ts_msgs::ObjectClass::CHOICE_VEHICLE_SUB_CLASS:
    toStruct_TrafficParticipantType(in.vehicle_sub_class, out.choice.vehicleSubClass);
    out.present = vam_ts_ObjectClass_PR::vam_ts_ObjectClass_PR_vehicleSubClass;
    break;
  case vam_ts_msgs::ObjectClass::CHOICE_VRU_SUB_CLASS:
    toStruct_VruProfileAndSubprofile(in.vru_sub_class, out.choice.vruSubClass);
    out.present = vam_ts_ObjectClass_PR::vam_ts_ObjectClass_PR_vruSubClass;
    break;
  case vam_ts_msgs::ObjectClass::CHOICE_GROUP_SUB_CLASS:
    toStruct_VruClusterInformation(in.group_sub_class, out.choice.groupSubClass);
    out.present = vam_ts_ObjectClass_PR::vam_ts_ObjectClass_PR_groupSubClass;
    break;
  case vam_ts_msgs::ObjectClass::CHOICE_OTHER_SUB_CLASS:
    toStruct_OtherSubClass(in.other_sub_class, out.choice.otherSubClass);
    out.present = vam_ts_ObjectClass_PR::vam_ts_ObjectClass_PR_otherSubClass;
    break;
  default: break;
  }
}

}
