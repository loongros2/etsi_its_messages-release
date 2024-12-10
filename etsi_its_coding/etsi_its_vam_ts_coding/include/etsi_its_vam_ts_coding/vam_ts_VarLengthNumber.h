/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=vam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_vam_ts_VarLengthNumber_H_
#define	_vam_ts_VarLengthNumber_H_


#include <etsi_its_vam_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_vam_ts_coding/NativeInteger.h>
#include "etsi_its_vam_ts_coding/vam_ts_Ext1.h"
#include <etsi_its_vam_ts_coding/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum vam_ts_VarLengthNumber_PR {
	vam_ts_VarLengthNumber_PR_NOTHING,	/* No components present */
	vam_ts_VarLengthNumber_PR_content,
	vam_ts_VarLengthNumber_PR_extension
} vam_ts_VarLengthNumber_PR;

/* vam_ts_VarLengthNumber */
typedef struct vam_ts_VarLengthNumber {
	vam_ts_VarLengthNumber_PR present;
	union vam_ts_VarLengthNumber_u {
		long	 content;
		vam_ts_Ext1_t	 extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} vam_ts_VarLengthNumber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_vam_ts_VarLengthNumber;

#ifdef __cplusplus
}
#endif

#endif	/* _vam_ts_VarLengthNumber_H_ */
#include <etsi_its_vam_ts_coding/asn_internal.h>