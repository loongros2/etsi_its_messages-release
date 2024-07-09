/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_YawRateValue_H_
#define	_denm_YawRateValue_H_


#include <etsi_its_denm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum denm_YawRateValue {
	denm_YawRateValue_straight	= 0,
	denm_YawRateValue_degSec_000_01ToRight	= -1,
	denm_YawRateValue_degSec_000_01ToLeft	= 1,
	denm_YawRateValue_unavailable	= 32767
} e_denm_YawRateValue;

/* denm_YawRateValue */
typedef long	 denm_YawRateValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_denm_YawRateValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_denm_YawRateValue;
asn_struct_free_f denm_YawRateValue_free;
asn_struct_print_f denm_YawRateValue_print;
asn_constr_check_f denm_YawRateValue_constraint;
per_type_decoder_f denm_YawRateValue_decode_uper;
per_type_encoder_f denm_YawRateValue_encode_uper;
per_type_decoder_f denm_YawRateValue_decode_aper;
per_type_encoder_f denm_YawRateValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_YawRateValue_H_ */
#include <etsi_its_denm_coding/asn_internal.h>
