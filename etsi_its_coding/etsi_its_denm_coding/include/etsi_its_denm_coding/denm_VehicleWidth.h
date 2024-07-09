/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_VehicleWidth_H_
#define	_denm_VehicleWidth_H_


#include <etsi_its_denm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum denm_VehicleWidth {
	denm_VehicleWidth_tenCentimeters	= 1,
	denm_VehicleWidth_outOfRange	= 61,
	denm_VehicleWidth_unavailable	= 62
} e_denm_VehicleWidth;

/* denm_VehicleWidth */
typedef long	 denm_VehicleWidth_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_denm_VehicleWidth;
asn_struct_free_f denm_VehicleWidth_free;
asn_struct_print_f denm_VehicleWidth_print;
asn_constr_check_f denm_VehicleWidth_constraint;
per_type_decoder_f denm_VehicleWidth_decode_uper;
per_type_encoder_f denm_VehicleWidth_encode_uper;
per_type_decoder_f denm_VehicleWidth_decode_aper;
per_type_encoder_f denm_VehicleWidth_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_VehicleWidth_H_ */
#include <etsi_its_denm_coding/asn_internal.h>
