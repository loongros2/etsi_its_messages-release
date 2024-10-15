/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_ts_TrafficParticipantType_H_
#define	_cam_ts_TrafficParticipantType_H_


#include <etsi_its_cam_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cam_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cam_ts_TrafficParticipantType {
	cam_ts_TrafficParticipantType_unknown	= 0,
	cam_ts_TrafficParticipantType_pedestrian	= 1,
	cam_ts_TrafficParticipantType_cyclist	= 2,
	cam_ts_TrafficParticipantType_moped	= 3,
	cam_ts_TrafficParticipantType_motorcycle	= 4,
	cam_ts_TrafficParticipantType_passengerCar	= 5,
	cam_ts_TrafficParticipantType_bus	= 6,
	cam_ts_TrafficParticipantType_lightTruck	= 7,
	cam_ts_TrafficParticipantType_heavyTruck	= 8,
	cam_ts_TrafficParticipantType_trailer	= 9,
	cam_ts_TrafficParticipantType_specialVehicle	= 10,
	cam_ts_TrafficParticipantType_tram	= 11,
	cam_ts_TrafficParticipantType_lightVruVehicle	= 12,
	cam_ts_TrafficParticipantType_animal	= 13,
	cam_ts_TrafficParticipantType_agricultural	= 14,
	cam_ts_TrafficParticipantType_roadSideUnit	= 15
} e_cam_ts_TrafficParticipantType;

/* cam_ts_TrafficParticipantType */
typedef long	 cam_ts_TrafficParticipantType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cam_ts_TrafficParticipantType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cam_ts_TrafficParticipantType;
asn_struct_free_f cam_ts_TrafficParticipantType_free;
asn_struct_print_f cam_ts_TrafficParticipantType_print;
asn_constr_check_f cam_ts_TrafficParticipantType_constraint;
per_type_decoder_f cam_ts_TrafficParticipantType_decode_uper;
per_type_encoder_f cam_ts_TrafficParticipantType_encode_uper;
per_type_decoder_f cam_ts_TrafficParticipantType_decode_aper;
per_type_encoder_f cam_ts_TrafficParticipantType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cam_ts_TrafficParticipantType_H_ */
#include <etsi_its_cam_ts_coding/asn_internal.h>
