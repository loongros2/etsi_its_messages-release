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

#include <etsi_its_denm_coding/denm_PosPillar.h>
#include <etsi_its_denm_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/PosPillar.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/pos_pillar.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_PosPillar(const denm_PosPillar_t& in, denm_msgs::PosPillar& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_PosPillar(const denm_msgs::PosPillar& in, denm_PosPillar_t& out) {
  memset(&out, 0, sizeof(denm_PosPillar_t));

  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
