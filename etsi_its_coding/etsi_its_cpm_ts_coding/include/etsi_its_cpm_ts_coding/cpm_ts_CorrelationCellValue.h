/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ts_CorrelationCellValue_H_
#define	_cpm_ts_CorrelationCellValue_H_


#include <etsi_its_cpm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_ts_CorrelationCellValue {
	cpm_ts_CorrelationCellValue_full_negative_correlation	= -100,
	cpm_ts_CorrelationCellValue_no_correlation	= 0,
	cpm_ts_CorrelationCellValue_full_positive_correlation	= 100,
	cpm_ts_CorrelationCellValue_unavailable	= 101
} e_cpm_ts_CorrelationCellValue;

/* cpm_ts_CorrelationCellValue */
typedef long	 cpm_ts_CorrelationCellValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cpm_ts_CorrelationCellValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cpm_ts_CorrelationCellValue;
asn_struct_free_f cpm_ts_CorrelationCellValue_free;
asn_struct_print_f cpm_ts_CorrelationCellValue_print;
asn_constr_check_f cpm_ts_CorrelationCellValue_constraint;
per_type_decoder_f cpm_ts_CorrelationCellValue_decode_uper;
per_type_encoder_f cpm_ts_CorrelationCellValue_encode_uper;
per_type_decoder_f cpm_ts_CorrelationCellValue_decode_aper;
per_type_encoder_f cpm_ts_CorrelationCellValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ts_CorrelationCellValue_H_ */
#include <etsi_its_cpm_ts_coding/asn_internal.h>
