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

#include <stdexcept>

#include <etsi_its_cam_coding/cam_PathHistory.h>
#include <etsi_its_cam_conversion/convertPathHistory.h>
#include <etsi_its_cam_conversion/convertPathPoint.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/PathHistory.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/path_history.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_PathHistory(const cam_PathHistory_t& in, cam_msgs::PathHistory& out) {
  for (int i = 0; i < in.list.count; ++i) {
    cam_msgs::PathPoint el;
    toRos_PathPoint(*(in.list.array[i]), el);
    out.array.push_back(el);
  }
}

void toStruct_PathHistory(const cam_msgs::PathHistory& in, cam_PathHistory_t& out) {
  memset(&out, 0, sizeof(cam_PathHistory_t));

  for (int i = 0; i < in.array.size(); ++i) {
    cam_PathPoint_t* el = (cam_PathPoint_t*) calloc(1, sizeof(cam_PathPoint_t));
    toStruct_PathPoint(in.array[i], *el);
    if (asn_sequence_add(&out, el)) throw std::invalid_argument("Failed to add to A_SEQUENCE_OF");
  }
}

}