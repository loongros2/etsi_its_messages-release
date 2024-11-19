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

#include <etsi_its_cam_ts_coding/cam_ts_EulerAnglesWithConfidence.h>
#include <etsi_its_cam_ts_conversion/convertCartesianAngle.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/EulerAnglesWithConfidence.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/euler_angles_with_confidence.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_EulerAnglesWithConfidence(const cam_ts_EulerAnglesWithConfidence_t& in, cam_ts_msgs::EulerAnglesWithConfidence& out) {
  toRos_CartesianAngle(in.zAngle, out.z_angle);
  if (in.yAngle) {
    toRos_CartesianAngle(*in.yAngle, out.y_angle);
    out.y_angle_is_present = true;
  }
  if (in.xAngle) {
    toRos_CartesianAngle(*in.xAngle, out.x_angle);
    out.x_angle_is_present = true;
  }
}

void toStruct_EulerAnglesWithConfidence(const cam_ts_msgs::EulerAnglesWithConfidence& in, cam_ts_EulerAnglesWithConfidence_t& out) {
  memset(&out, 0, sizeof(cam_ts_EulerAnglesWithConfidence_t));

  toStruct_CartesianAngle(in.z_angle, out.zAngle);
  if (in.y_angle_is_present) {
    out.yAngle = (cam_ts_CartesianAngle_t*) calloc(1, sizeof(cam_ts_CartesianAngle_t));
    toStruct_CartesianAngle(in.y_angle, *out.yAngle);
  }
  if (in.x_angle_is_present) {
    out.xAngle = (cam_ts_CartesianAngle_t*) calloc(1, sizeof(cam_ts_CartesianAngle_t));
    toStruct_CartesianAngle(in.x_angle, *out.xAngle);
  }
}

}
