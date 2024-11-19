/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN1C-UsefulInformationObjectClasses"
 * 	found in "/usr/local/share/asn1c/standard-modules/ASN1C-UsefulInformationObjectClasses.asn1"
 * 	`asn1c -fcompound-names -fprefix=cpm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ts_EXTERNAL_H_
#define	_cpm_ts_EXTERNAL_H_


#include <etsi_its_cpm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_ts_coding/OBJECT_IDENTIFIER.h>
#include <etsi_its_cpm_ts_coding/NativeInteger.h>
#include <etsi_its_cpm_ts_coding/ObjectDescriptor.h>
#include <etsi_its_cpm_ts_coding/ANY.h>
#include <etsi_its_cpm_ts_coding/OCTET_STRING.h>
#include <etsi_its_cpm_ts_coding/BIT_STRING.h>
#include <etsi_its_cpm_ts_coding/constr_CHOICE.h>
#include <etsi_its_cpm_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_ts_EXTERNAL__encoding_PR {
	cpm_ts_EXTERNAL__encoding_PR_NOTHING,	/* No components present */
	cpm_ts_EXTERNAL__encoding_PR_single_ASN1_type,
	cpm_ts_EXTERNAL__encoding_PR_octet_aligned,
	cpm_ts_EXTERNAL__encoding_PR_arbitrary
} cpm_ts_EXTERNAL__encoding_PR;

/* cpm_ts_EXTERNAL */
typedef struct cpm_ts_EXTERNAL {
	OBJECT_IDENTIFIER_t	*direct_reference;	/* OPTIONAL */
	long	*indirect_reference;	/* OPTIONAL */
	ObjectDescriptor_t	*data_value_descriptor;	/* OPTIONAL */
	struct cpm_ts_EXTERNAL__encoding {
		cpm_ts_EXTERNAL__encoding_PR present;
		union cpm_ts_EXTERNAL__cpm_ts_encoding_u {
			ANY_t	 single_ASN1_type;
			OCTET_STRING_t	 octet_aligned;
			BIT_STRING_t	 arbitrary;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} encoding;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cpm_ts_EXTERNAL_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_ts_EXTERNAL;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ts_EXTERNAL_H_ */
#include <etsi_its_cpm_ts_coding/asn_internal.h>
