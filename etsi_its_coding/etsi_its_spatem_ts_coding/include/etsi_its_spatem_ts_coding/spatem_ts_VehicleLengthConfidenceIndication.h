/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_VehicleLengthConfidenceIndication_H_
#define	_spatem_ts_VehicleLengthConfidenceIndication_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_spatem_ts_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum spatem_ts_VehicleLengthConfidenceIndication {
	spatem_ts_VehicleLengthConfidenceIndication_noTrailerPresent	= 0,
	spatem_ts_VehicleLengthConfidenceIndication_trailerPresentWithKnownLength	= 1,
	spatem_ts_VehicleLengthConfidenceIndication_trailerPresentWithUnknownLength	= 2,
	spatem_ts_VehicleLengthConfidenceIndication_trailerPresenceIsUnknown	= 3,
	spatem_ts_VehicleLengthConfidenceIndication_unavailable	= 4
} e_spatem_ts_VehicleLengthConfidenceIndication;

/* spatem_ts_VehicleLengthConfidenceIndication */
typedef long	 spatem_ts_VehicleLengthConfidenceIndication_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_spatem_ts_VehicleLengthConfidenceIndication_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_VehicleLengthConfidenceIndication;
extern const asn_INTEGER_specifics_t asn_SPC_spatem_ts_VehicleLengthConfidenceIndication_specs_1;
asn_struct_free_f spatem_ts_VehicleLengthConfidenceIndication_free;
asn_struct_print_f spatem_ts_VehicleLengthConfidenceIndication_print;
asn_constr_check_f spatem_ts_VehicleLengthConfidenceIndication_constraint;
per_type_decoder_f spatem_ts_VehicleLengthConfidenceIndication_decode_uper;
per_type_encoder_f spatem_ts_VehicleLengthConfidenceIndication_encode_uper;
per_type_decoder_f spatem_ts_VehicleLengthConfidenceIndication_decode_aper;
per_type_encoder_f spatem_ts_VehicleLengthConfidenceIndication_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _spatem_ts_VehicleLengthConfidenceIndication_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>