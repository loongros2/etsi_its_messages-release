/** ============================================================================
MIT License

Copyright (c) 2023 Institute for Automotive Engineering (ika), RWTH Aachen University

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

#include <etsi_its_denm_coding/Speed.h>
#include <etsi_its_denm_conversion/convertSpeedValue.h>
#include <etsi_its_denm_conversion/convertSpeedConfidence.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/Speed.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/speed.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_Speed(const Speed_t& in, denm_msgs::Speed& out) {

  toRos_SpeedValue(in.speedValue, out.speed_value);
  toRos_SpeedConfidence(in.speedConfidence, out.speed_confidence);
}

void toStruct_Speed(const denm_msgs::Speed& in, Speed_t& out) {

  memset(&out, 0, sizeof(Speed_t));

  toStruct_SpeedValue(in.speed_value, out.speedValue);
  toStruct_SpeedConfidence(in.speed_confidence, out.speedConfidence);
}

}