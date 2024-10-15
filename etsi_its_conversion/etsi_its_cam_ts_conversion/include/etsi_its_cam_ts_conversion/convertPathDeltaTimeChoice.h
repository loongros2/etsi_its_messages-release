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

#include <etsi_its_cam_ts_coding/cam_ts_PathDeltaTimeChoice.h>
#include <etsi_its_cam_ts_conversion/convertDeltaTimeTenSeconds.h>
#include <etsi_its_cam_ts_conversion/convertDeltaTimeTenthOfSecond.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/PathDeltaTimeChoice.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/path_delta_time_choice.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_PathDeltaTimeChoice(const cam_ts_PathDeltaTimeChoice_t& in, cam_ts_msgs::PathDeltaTimeChoice& out) {
  switch (in.present) {
  case cam_ts_PathDeltaTimeChoice_PR_deltaTimeHighPrecision:
    toRos_DeltaTimeTenthOfSecond(in.choice.deltaTimeHighPrecision, out.delta_time_high_precision);
    out.choice = cam_ts_msgs::PathDeltaTimeChoice::CHOICE_DELTA_TIME_HIGH_PRECISION;
    break;
  case cam_ts_PathDeltaTimeChoice_PR_deltaTimeBigRange:
    toRos_DeltaTimeTenSeconds(in.choice.deltaTimeBigRange, out.delta_time_big_range);
    out.choice = cam_ts_msgs::PathDeltaTimeChoice::CHOICE_DELTA_TIME_BIG_RANGE;
    break;
  default: break;
  }
}

void toStruct_PathDeltaTimeChoice(const cam_ts_msgs::PathDeltaTimeChoice& in, cam_ts_PathDeltaTimeChoice_t& out) {
  memset(&out, 0, sizeof(cam_ts_PathDeltaTimeChoice_t));

  switch (in.choice) {
  case cam_ts_msgs::PathDeltaTimeChoice::CHOICE_DELTA_TIME_HIGH_PRECISION:
    toStruct_DeltaTimeTenthOfSecond(in.delta_time_high_precision, out.choice.deltaTimeHighPrecision);
    out.present = cam_ts_PathDeltaTimeChoice_PR::cam_ts_PathDeltaTimeChoice_PR_deltaTimeHighPrecision;
    break;
  case cam_ts_msgs::PathDeltaTimeChoice::CHOICE_DELTA_TIME_BIG_RANGE:
    toStruct_DeltaTimeTenSeconds(in.delta_time_big_range, out.choice.deltaTimeBigRange);
    out.present = cam_ts_PathDeltaTimeChoice_PR::cam_ts_PathDeltaTimeChoice_PR_deltaTimeBigRange;
    break;
  default: break;
  }
}

}
