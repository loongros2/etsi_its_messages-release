/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_ts_VerticalAcceleration_H_
#define	_cam_ts_VerticalAcceleration_H_


#include <etsi_its_cam_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cam_ts_coding/cam_ts_VerticalAccelerationValue.h"
#include "etsi_its_cam_ts_coding/cam_ts_AccelerationConfidence.h"
#include <etsi_its_cam_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cam_ts_VerticalAcceleration */
typedef struct cam_ts_VerticalAcceleration {
	cam_ts_VerticalAccelerationValue_t	 verticalAccelerationValue;
	cam_ts_AccelerationConfidence_t	 verticalAccelerationConfidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cam_ts_VerticalAcceleration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cam_ts_VerticalAcceleration;

#ifdef __cplusplus
}
#endif

#endif	/* _cam_ts_VerticalAcceleration_H_ */
#include <etsi_its_cam_ts_coding/asn_internal.h>
