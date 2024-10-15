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

#include <etsi_its_cam_ts_coding/cam_ts_EuVehicleCategoryCode.h>
#include <etsi_its_cam_ts_coding/byte.h>
#include <etsi_its_primitives_conversion/convertbyte.h>
#include <etsi_its_cam_ts_conversion/convertEuVehicleCategoryL.h>
#include <etsi_its_cam_ts_conversion/convertEuVehicleCategoryM.h>
#include <etsi_its_cam_ts_conversion/convertEuVehicleCategoryN.h>
#include <etsi_its_cam_ts_conversion/convertEuVehicleCategoryO.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/EuVehicleCategoryCode.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/eu_vehicle_category_code.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_EuVehicleCategoryCode(const cam_ts_EuVehicleCategoryCode_t& in, cam_ts_msgs::EuVehicleCategoryCode& out) {
  switch (in.present) {
  case cam_ts_EuVehicleCategoryCode_PR_euVehicleCategoryL:
    toRos_EuVehicleCategoryL(in.choice.euVehicleCategoryL, out.eu_vehicle_category_l);
    out.choice = cam_ts_msgs::EuVehicleCategoryCode::CHOICE_EU_VEHICLE_CATEGORY_L;
    break;
  case cam_ts_EuVehicleCategoryCode_PR_euVehicleCategoryM:
    toRos_EuVehicleCategoryM(in.choice.euVehicleCategoryM, out.eu_vehicle_category_m);
    out.choice = cam_ts_msgs::EuVehicleCategoryCode::CHOICE_EU_VEHICLE_CATEGORY_M;
    break;
  case cam_ts_EuVehicleCategoryCode_PR_euVehicleCategoryN:
    toRos_EuVehicleCategoryN(in.choice.euVehicleCategoryN, out.eu_vehicle_category_n);
    out.choice = cam_ts_msgs::EuVehicleCategoryCode::CHOICE_EU_VEHICLE_CATEGORY_N;
    break;
  case cam_ts_EuVehicleCategoryCode_PR_euVehicleCategoryO:
    toRos_EuVehicleCategoryO(in.choice.euVehicleCategoryO, out.eu_vehicle_category_o);
    out.choice = cam_ts_msgs::EuVehicleCategoryCode::CHOICE_EU_VEHICLE_CATEGORY_O;
    break;
etsi_its_primitives_conversion::toRos_byte(in, out.value);
    break;
etsi_its_primitives_conversion::toRos_byte(in, out.value);
    break;
  default: break;
  }
}

void toStruct_EuVehicleCategoryCode(const cam_ts_msgs::EuVehicleCategoryCode& in, cam_ts_EuVehicleCategoryCode_t& out) {
  memset(&out, 0, sizeof(cam_ts_EuVehicleCategoryCode_t));

  switch (in.choice) {
  case cam_ts_msgs::EuVehicleCategoryCode::CHOICE_EU_VEHICLE_CATEGORY_L:
    toStruct_EuVehicleCategoryL(in.eu_vehicle_category_l, out.choice.euVehicleCategoryL);
    out.present = cam_ts_EuVehicleCategoryCode_PR::cam_ts_EuVehicleCategoryCode_PR_euVehicleCategoryL;
    break;
  case cam_ts_msgs::EuVehicleCategoryCode::CHOICE_EU_VEHICLE_CATEGORY_M:
    toStruct_EuVehicleCategoryM(in.eu_vehicle_category_m, out.choice.euVehicleCategoryM);
    out.present = cam_ts_EuVehicleCategoryCode_PR::cam_ts_EuVehicleCategoryCode_PR_euVehicleCategoryM;
    break;
  case cam_ts_msgs::EuVehicleCategoryCode::CHOICE_EU_VEHICLE_CATEGORY_N:
    toStruct_EuVehicleCategoryN(in.eu_vehicle_category_n, out.choice.euVehicleCategoryN);
    out.present = cam_ts_EuVehicleCategoryCode_PR::cam_ts_EuVehicleCategoryCode_PR_euVehicleCategoryN;
    break;
  case cam_ts_msgs::EuVehicleCategoryCode::CHOICE_EU_VEHICLE_CATEGORY_O:
    toStruct_EuVehicleCategoryO(in.eu_vehicle_category_o, out.choice.euVehicleCategoryO);
    out.present = cam_ts_EuVehicleCategoryCode_PR::cam_ts_EuVehicleCategoryCode_PR_euVehicleCategoryO;
    break;
etsi_its_primitives_conversion::toStruct_byte(in, out.value);
    break;
etsi_its_primitives_conversion::toStruct_byte(in, out.value);
    break;
  default: break;
  }
}

}
