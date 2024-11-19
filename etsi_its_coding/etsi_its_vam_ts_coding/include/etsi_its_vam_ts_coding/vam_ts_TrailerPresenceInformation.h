/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=vam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_vam_ts_TrailerPresenceInformation_H_
#define	_vam_ts_TrailerPresenceInformation_H_


#include <etsi_its_vam_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_vam_ts_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum vam_ts_TrailerPresenceInformation {
	vam_ts_TrailerPresenceInformation_noTrailerPresent	= 0,
	vam_ts_TrailerPresenceInformation_trailerPresentWithKnownLength	= 1,
	vam_ts_TrailerPresenceInformation_trailerPresentWithUnknownLength	= 2,
	vam_ts_TrailerPresenceInformation_trailerPresenceIsUnknown	= 3,
	vam_ts_TrailerPresenceInformation_unavailable	= 4
} e_vam_ts_TrailerPresenceInformation;

/* vam_ts_TrailerPresenceInformation */
typedef long	 vam_ts_TrailerPresenceInformation_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_vam_ts_TrailerPresenceInformation_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_vam_ts_TrailerPresenceInformation;
extern const asn_INTEGER_specifics_t asn_SPC_vam_ts_TrailerPresenceInformation_specs_1;
asn_struct_free_f vam_ts_TrailerPresenceInformation_free;
asn_struct_print_f vam_ts_TrailerPresenceInformation_print;
asn_constr_check_f vam_ts_TrailerPresenceInformation_constraint;
per_type_decoder_f vam_ts_TrailerPresenceInformation_decode_uper;
per_type_encoder_f vam_ts_TrailerPresenceInformation_encode_uper;
per_type_decoder_f vam_ts_TrailerPresenceInformation_decode_aper;
per_type_encoder_f vam_ts_TrailerPresenceInformation_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _vam_ts_TrailerPresenceInformation_H_ */
#include <etsi_its_vam_ts_coding/asn_internal.h>