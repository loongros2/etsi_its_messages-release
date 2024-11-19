/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_StationaryVehicleSubCauseCode_H_
#define	_cam_StationaryVehicleSubCauseCode_H_


#include <etsi_its_cam_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cam_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cam_StationaryVehicleSubCauseCode {
	cam_StationaryVehicleSubCauseCode_unavailable	= 0,
	cam_StationaryVehicleSubCauseCode_humanProblem	= 1,
	cam_StationaryVehicleSubCauseCode_vehicleBreakdown	= 2,
	cam_StationaryVehicleSubCauseCode_postCrash	= 3,
	cam_StationaryVehicleSubCauseCode_publicTransportStop	= 4,
	cam_StationaryVehicleSubCauseCode_carryingDangerousGoods	= 5
} e_cam_StationaryVehicleSubCauseCode;

/* cam_StationaryVehicleSubCauseCode */
typedef long	 cam_StationaryVehicleSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cam_StationaryVehicleSubCauseCode;
asn_struct_free_f cam_StationaryVehicleSubCauseCode_free;
asn_struct_print_f cam_StationaryVehicleSubCauseCode_print;
asn_constr_check_f cam_StationaryVehicleSubCauseCode_constraint;
per_type_decoder_f cam_StationaryVehicleSubCauseCode_decode_uper;
per_type_encoder_f cam_StationaryVehicleSubCauseCode_encode_uper;
per_type_decoder_f cam_StationaryVehicleSubCauseCode_decode_aper;
per_type_encoder_f cam_StationaryVehicleSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cam_StationaryVehicleSubCauseCode_H_ */
#include <etsi_its_cam_coding/asn_internal.h>
