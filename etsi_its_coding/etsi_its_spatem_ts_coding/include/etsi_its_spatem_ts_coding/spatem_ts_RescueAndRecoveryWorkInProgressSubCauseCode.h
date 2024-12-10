/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_H_
#define	_spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_spatem_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode {
	spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_unavailable	= 0,
	spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_emergencyVehicles	= 1,
	spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_rescueHelicopterLanding	= 2,
	spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_policeActivityOngoing	= 3,
	spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_medicalEmergencyOngoing	= 4,
	spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_childAbductionInProgress	= 5
} e_spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode;

/* spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode */
typedef long	 spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode;
asn_struct_free_f spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_free;
asn_struct_print_f spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_print;
asn_constr_check_f spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_constraint;
per_type_decoder_f spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_decode_uper;
per_type_encoder_f spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_encode_uper;
per_type_decoder_f spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_decode_aper;
per_type_encoder_f spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _spatem_ts_RescueAndRecoveryWorkInProgressSubCauseCode_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>
