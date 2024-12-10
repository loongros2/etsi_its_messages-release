/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_mapem_ts_EmissionType_H_
#define	_mapem_ts_EmissionType_H_


#include <etsi_its_mapem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_mapem_ts_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum mapem_ts_EmissionType {
	mapem_ts_EmissionType_euro1	= 0,
	mapem_ts_EmissionType_euro2	= 1,
	mapem_ts_EmissionType_euro3	= 2,
	mapem_ts_EmissionType_euro4	= 3,
	mapem_ts_EmissionType_euro5	= 4,
	mapem_ts_EmissionType_euro6	= 5
	/*
	 * Enumeration is extensible
	 */
} e_mapem_ts_EmissionType;

/* mapem_ts_EmissionType */
typedef long	 mapem_ts_EmissionType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_mapem_ts_EmissionType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_mapem_ts_EmissionType;
extern const asn_INTEGER_specifics_t asn_SPC_mapem_ts_EmissionType_specs_1;
asn_struct_free_f mapem_ts_EmissionType_free;
asn_struct_print_f mapem_ts_EmissionType_print;
asn_constr_check_f mapem_ts_EmissionType_constraint;
per_type_decoder_f mapem_ts_EmissionType_decode_uper;
per_type_encoder_f mapem_ts_EmissionType_encode_uper;
per_type_decoder_f mapem_ts_EmissionType_decode_aper;
per_type_encoder_f mapem_ts_EmissionType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _mapem_ts_EmissionType_H_ */
#include <etsi_its_mapem_ts_coding/asn_internal.h>