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

#include <etsi_its_vam_ts_coding/vam_ts_AccelerationChangeIndication.h>
#include <etsi_its_vam_ts_conversion/convertAccelerationChange.h>
#include <etsi_its_vam_ts_conversion/convertDeltaTimeTenthOfSecond.h>
#ifdef ROS1
#include <etsi_its_vam_ts_msgs/AccelerationChangeIndication.h>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs;
#else
#include <etsi_its_vam_ts_msgs/msg/acceleration_change_indication.hpp>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs::msg;
#endif


namespace etsi_its_vam_ts_conversion {

void toRos_AccelerationChangeIndication(const vam_ts_AccelerationChangeIndication_t& in, vam_ts_msgs::AccelerationChangeIndication& out) {
  toRos_AccelerationChange(in.accelOrDecel, out.accel_or_decel);
  toRos_DeltaTimeTenthOfSecond(in.actionDeltaTime, out.action_delta_time);
}

void toStruct_AccelerationChangeIndication(const vam_ts_msgs::AccelerationChangeIndication& in, vam_ts_AccelerationChangeIndication_t& out) {
  memset(&out, 0, sizeof(vam_ts_AccelerationChangeIndication_t));

  toStruct_AccelerationChange(in.accel_or_decel, out.accelOrDecel);
  toStruct_DeltaTimeTenthOfSecond(in.action_delta_time, out.actionDeltaTime);
}

}