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
  asn1/raw/cam_ts103900/CAM-PDU-Descriptions.asn \
  asn1/patched/cam_ts103900/cdd/ETSI-ITS-CDD.asn \
  -t \
  cam_ts \
  -o \
  etsi_its_conversion/etsi_its_cam_ts_conversion/include/etsi_its_cam_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
 * This DE describes the status of the exterior light switches of a vehicle incl. VRU vehicles.
 *
 * The corresponding bit shall be set to 1 under the following conditions:
 * - 0 - `lowBeamHeadlightsOn`    - when the low beam head light switch is on,
 * - 1 - `highBeamHeadlightsOn`   - when the high beam head light switch is on,
 * - 2 - `leftTurnSignalOn`       - when the left turnSignal switch is on,
 * - 3 - `rightTurnSignalOn`      - when the right turn signal switch is on,
 * - 4 - `daytimeRunningLightsOn` - when the daytime running light switch is on,
 * - 5 - `reverseLightOn`         - when the reverse light switch is on,
 * - 6 - `fogLightOn`             - when the tail fog light switch is on,
 * - 7 - `parkingLightsOn`        - when the parking light switch is on.
 * 
 * @note: The value of each bit indicates the state of the switch, which commands the corresponding light.
 * The bit corresponding to a specific light is set to `1`, when the corresponding switch is turned on,
 * either manually by the driver or automatically by a vehicle system. The bit value does not indicate
 * if the corresponding lamps are alight or not.
 * 
 * If a vehicle is not equipped with a certain light or if the light switch status information is not available,
 * the corresponding bit shall be set to `0`.
 * 
 * As the bit value indicates only the state of the switch, the turn signal and hazard signal bit values shall not
 * alternate with the blinking interval.
 * 
 * For hazard indicator, the `leftTurnSignalOn (2)` and `rightTurnSignalOn (3)` shall be both set to `1`.
 * 
 * @category Vehicle information
 * @revision: Description revised in V2.1.1
 *
ExteriorLights ::= BIT STRING {
    lowBeamHeadlightsOn      (0),
    highBeamHeadlightsOn     (1),
    leftTurnSignalOn         (2),
    rightTurnSignalOn        (3),
    daytimeRunningLightsOn   (4),
    reverseLightOn           (5),
    fogLightOn               (6),
    parkingLightsOn          (7)
} (SIZE(8))
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_ExteriorLights.h>
#include <etsi_its_cam_ts_coding/BIT_STRING.h>
#include <etsi_its_primitives_conversion/convertBIT_STRING.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/ExteriorLights.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/exterior_lights.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_ExteriorLights(const cam_ts_ExteriorLights_t& in, cam_ts_msgs::ExteriorLights& out) {
  etsi_its_primitives_conversion::toRos_BIT_STRING(in, out.value);
  out.bits_unused = in.bits_unused;
}

void toStruct_ExteriorLights(const cam_ts_msgs::ExteriorLights& in, cam_ts_ExteriorLights_t& out) {
  memset(&out, 0, sizeof(cam_ts_ExteriorLights_t));
  etsi_its_primitives_conversion::toStruct_BIT_STRING(in.value, out);
  out.bits_unused = in.bits_unused;
}

}
