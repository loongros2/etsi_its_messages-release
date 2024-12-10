/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ts_CauseCode_H_
#define	_cpm_ts_CauseCode_H_


#include <etsi_its_cpm_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cpm_ts_coding/cpm_ts_CauseCodeType.h"
#include "etsi_its_cpm_ts_coding/cpm_ts_SubCauseCodeType.h"
#include <etsi_its_cpm_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cpm_ts_CauseCode */
typedef struct cpm_ts_CauseCode {
	cpm_ts_CauseCodeType_t	 causeCode;
	cpm_ts_SubCauseCodeType_t	 subCauseCode;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cpm_ts_CauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_ts_CauseCode;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ts_CauseCode_H_ */
#include <etsi_its_cpm_ts_coding/asn_internal.h>
