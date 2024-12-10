/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ts_ClusterBreakupReason_H_
#define	_cpm_ts_ClusterBreakupReason_H_


#include <etsi_its_cpm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_ts_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_ts_ClusterBreakupReason {
	cpm_ts_ClusterBreakupReason_notProvided	= 0,
	cpm_ts_ClusterBreakupReason_clusteringPurposeCompleted	= 1,
	cpm_ts_ClusterBreakupReason_leaderMovedOutOfClusterBoundingBox	= 2,
	cpm_ts_ClusterBreakupReason_joiningAnotherCluster	= 3,
	cpm_ts_ClusterBreakupReason_enteringLowRiskAreaBasedOnMaps	= 4,
	cpm_ts_ClusterBreakupReason_receptionOfCpmContainingCluster	= 5,
	cpm_ts_ClusterBreakupReason_max	= 15
} e_cpm_ts_ClusterBreakupReason;

/* cpm_ts_ClusterBreakupReason */
typedef long	 cpm_ts_ClusterBreakupReason_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cpm_ts_ClusterBreakupReason_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cpm_ts_ClusterBreakupReason;
extern const asn_INTEGER_specifics_t asn_SPC_cpm_ts_ClusterBreakupReason_specs_1;
asn_struct_free_f cpm_ts_ClusterBreakupReason_free;
asn_struct_print_f cpm_ts_ClusterBreakupReason_print;
asn_constr_check_f cpm_ts_ClusterBreakupReason_constraint;
per_type_decoder_f cpm_ts_ClusterBreakupReason_decode_uper;
per_type_encoder_f cpm_ts_ClusterBreakupReason_encode_uper;
per_type_decoder_f cpm_ts_ClusterBreakupReason_decode_aper;
per_type_encoder_f cpm_ts_ClusterBreakupReason_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ts_ClusterBreakupReason_H_ */
#include <etsi_its_cpm_ts_coding/asn_internal.h>
