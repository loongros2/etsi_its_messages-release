/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER`
 */

#ifndef	_LightBarSirenInUse_H_
#define	_LightBarSirenInUse_H_


#include <etsi_its_cam_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cam_coding/BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LightBarSirenInUse {
	LightBarSirenInUse_lightBarActivated	= 0,
	LightBarSirenInUse_sirenActivated	= 1
} e_LightBarSirenInUse;

/* LightBarSirenInUse */
typedef BIT_STRING_t	 LightBarSirenInUse_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LightBarSirenInUse_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LightBarSirenInUse;
asn_struct_free_f LightBarSirenInUse_free;
asn_struct_print_f LightBarSirenInUse_print;
asn_constr_check_f LightBarSirenInUse_constraint;
ber_type_decoder_f LightBarSirenInUse_decode_ber;
der_type_encoder_f LightBarSirenInUse_encode_der;
xer_type_decoder_f LightBarSirenInUse_decode_xer;
xer_type_encoder_f LightBarSirenInUse_encode_xer;
oer_type_decoder_f LightBarSirenInUse_decode_oer;
oer_type_encoder_f LightBarSirenInUse_encode_oer;
per_type_decoder_f LightBarSirenInUse_decode_uper;
per_type_encoder_f LightBarSirenInUse_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LightBarSirenInUse_H_ */
#include <etsi_its_cam_coding/asn_internal.h>
