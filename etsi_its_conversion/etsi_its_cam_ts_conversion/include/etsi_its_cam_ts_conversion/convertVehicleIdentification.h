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

#include <etsi_its_cam_ts_coding/cam_ts_VehicleIdentification.h>
#include <etsi_its_cam_ts_conversion/convertVDS.h>
#include <etsi_its_cam_ts_conversion/convertWMInumber.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/VehicleIdentification.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/vehicle_identification.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_VehicleIdentification(const cam_ts_VehicleIdentification_t& in, cam_ts_msgs::VehicleIdentification& out) {
  if (in.wMInumber) {
    toRos_WMInumber(*in.wMInumber, out.w_m_inumber);
    out.w_m_inumber_is_present = true;
  }
  if (in.vDS) {
    toRos_VDS(*in.vDS, out.v_ds);
    out.v_ds_is_present = true;
  }
}

void toStruct_VehicleIdentification(const cam_ts_msgs::VehicleIdentification& in, cam_ts_VehicleIdentification_t& out) {
  memset(&out, 0, sizeof(cam_ts_VehicleIdentification_t));

  if (in.w_m_inumber_is_present) {
    out.wMInumber = (cam_ts_WMInumber_t*) calloc(1, sizeof(cam_ts_WMInumber_t));
    toStruct_WMInumber(in.w_m_inumber, *out.wMInumber);
  }
  if (in.v_ds_is_present) {
    out.vDS = (cam_ts_VDS_t*) calloc(1, sizeof(cam_ts_VDS_t));
    toStruct_VDS(in.v_ds, *out.vDS);
  }
}

}
