/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_SlowVehicleSubCauseCode_H_
#define	_cam_SlowVehicleSubCauseCode_H_


#include <etsi_its_cam_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cam_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cam_SlowVehicleSubCauseCode {
	cam_SlowVehicleSubCauseCode_unavailable	= 0,
	cam_SlowVehicleSubCauseCode_maintenanceVehicle	= 1,
	cam_SlowVehicleSubCauseCode_vehiclesSlowingToLookAtAccident	= 2,
	cam_SlowVehicleSubCauseCode_abnormalLoad	= 3,
	cam_SlowVehicleSubCauseCode_abnormalWideLoad	= 4,
	cam_SlowVehicleSubCauseCode_convoy	= 5,
	cam_SlowVehicleSubCauseCode_snowplough	= 6,
	cam_SlowVehicleSubCauseCode_deicing	= 7,
	cam_SlowVehicleSubCauseCode_saltingVehicles	= 8
} e_cam_SlowVehicleSubCauseCode;

/* cam_SlowVehicleSubCauseCode */
typedef long	 cam_SlowVehicleSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cam_SlowVehicleSubCauseCode;
asn_struct_free_f cam_SlowVehicleSubCauseCode_free;
asn_struct_print_f cam_SlowVehicleSubCauseCode_print;
asn_constr_check_f cam_SlowVehicleSubCauseCode_constraint;
per_type_decoder_f cam_SlowVehicleSubCauseCode_decode_uper;
per_type_encoder_f cam_SlowVehicleSubCauseCode_encode_uper;
per_type_decoder_f cam_SlowVehicleSubCauseCode_decode_aper;
per_type_encoder_f cam_SlowVehicleSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cam_SlowVehicleSubCauseCode_H_ */
#include <etsi_its_cam_coding/asn_internal.h>
