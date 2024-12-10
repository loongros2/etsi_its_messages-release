/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=vam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_H_
#define	_vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_H_


#include <etsi_its_vam_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_vam_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode {
	vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_unavailable	= 0,
	vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_strongWinds	= 1,
	vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_damagingHail	= 2,
	vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_hurricane	= 3,
	vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_thunderstorm	= 4,
	vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_tornado	= 5,
	vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_blizzard	= 6
} e_vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode;

/* vam_ts_AdverseWeatherCondition-ExtremeWeatherConditionSubCauseCode */
typedef long	 vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode;
asn_struct_free_f vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_free;
asn_struct_print_f vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_print;
asn_constr_check_f vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_constraint;
per_type_decoder_f vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_decode_uper;
per_type_encoder_f vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_encode_uper;
per_type_decoder_f vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_decode_aper;
per_type_encoder_f vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _vam_ts_AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_H_ */
#include <etsi_its_vam_ts_coding/asn_internal.h>