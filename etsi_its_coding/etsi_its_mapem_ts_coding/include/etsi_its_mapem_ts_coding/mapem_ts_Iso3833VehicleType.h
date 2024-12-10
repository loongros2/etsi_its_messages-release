/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ElectronicRegistrationIdentificationVehicleDataModule"
 * 	found in "/input/ISO24534-3_ElectronicRegistrationIdentificationVehicleDataModule-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_mapem_ts_Iso3833VehicleType_H_
#define	_mapem_ts_Iso3833VehicleType_H_


#include <etsi_its_mapem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_mapem_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum mapem_ts_Iso3833VehicleType {
	mapem_ts_Iso3833VehicleType_passengerCar	= 0,
	mapem_ts_Iso3833VehicleType_saloon	= 1,
	mapem_ts_Iso3833VehicleType_convertibleSaloon	= 2,
	mapem_ts_Iso3833VehicleType_pullmanSaloon	= 3,
	mapem_ts_Iso3833VehicleType_stationWagon	= 4,
	mapem_ts_Iso3833VehicleType_truckStationWagon	= 5,
	mapem_ts_Iso3833VehicleType_coupe	= 6,
	mapem_ts_Iso3833VehicleType_convertible	= 7,
	mapem_ts_Iso3833VehicleType_multipurposePassengerCar	= 8,
	mapem_ts_Iso3833VehicleType_forwardControlPassengerCar	= 9,
	mapem_ts_Iso3833VehicleType_specialPassengerCar	= 10,
	mapem_ts_Iso3833VehicleType_bus	= 11,
	mapem_ts_Iso3833VehicleType_minibus	= 12,
	mapem_ts_Iso3833VehicleType_urbanBus	= 13,
	mapem_ts_Iso3833VehicleType_interurbanCoach	= 14,
	mapem_ts_Iso3833VehicleType_longDistanceCoach	= 15,
	mapem_ts_Iso3833VehicleType_articulatedBus	= 16,
	mapem_ts_Iso3833VehicleType_trolleyBus	= 17,
	mapem_ts_Iso3833VehicleType_specialBus	= 18,
	mapem_ts_Iso3833VehicleType_commercialVehicle	= 19,
	mapem_ts_Iso3833VehicleType_specialCommercialVehicle	= 20,
	mapem_ts_Iso3833VehicleType_specialVehicle	= 21,
	mapem_ts_Iso3833VehicleType_trailingTowingVehicle	= 22,
	mapem_ts_Iso3833VehicleType_semiTrailerTowingVehicle	= 23,
	mapem_ts_Iso3833VehicleType_trailer	= 24,
	mapem_ts_Iso3833VehicleType_busTrailer	= 25,
	mapem_ts_Iso3833VehicleType_generalPurposeTrailer	= 26,
	mapem_ts_Iso3833VehicleType_caravan	= 27,
	mapem_ts_Iso3833VehicleType_specialTrailer	= 28,
	mapem_ts_Iso3833VehicleType_semiTrailer	= 29,
	mapem_ts_Iso3833VehicleType_busSemiTrailer	= 30,
	mapem_ts_Iso3833VehicleType_generalPurposeSemiTrailer	= 31,
	mapem_ts_Iso3833VehicleType_specialSemiTrailer	= 32,
	mapem_ts_Iso3833VehicleType_roadTrain	= 33,
	mapem_ts_Iso3833VehicleType_passengerRoadTrain	= 34,
	mapem_ts_Iso3833VehicleType_articulatedRoadTrain	= 35,
	mapem_ts_Iso3833VehicleType_doubleRoadTrain	= 36,
	mapem_ts_Iso3833VehicleType_compositeRoadTrain	= 37,
	mapem_ts_Iso3833VehicleType_specialRoadTrain	= 38,
	mapem_ts_Iso3833VehicleType_moped	= 39,
	mapem_ts_Iso3833VehicleType_motorCycle	= 40
} e_mapem_ts_Iso3833VehicleType;

/* mapem_ts_Iso3833VehicleType */
typedef long	 mapem_ts_Iso3833VehicleType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_mapem_ts_Iso3833VehicleType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_mapem_ts_Iso3833VehicleType;
asn_struct_free_f mapem_ts_Iso3833VehicleType_free;
asn_struct_print_f mapem_ts_Iso3833VehicleType_print;
asn_constr_check_f mapem_ts_Iso3833VehicleType_constraint;
per_type_decoder_f mapem_ts_Iso3833VehicleType_decode_uper;
per_type_encoder_f mapem_ts_Iso3833VehicleType_encode_uper;
per_type_decoder_f mapem_ts_Iso3833VehicleType_decode_aper;
per_type_encoder_f mapem_ts_Iso3833VehicleType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _mapem_ts_Iso3833VehicleType_H_ */
#include <etsi_its_mapem_ts_coding/asn_internal.h>