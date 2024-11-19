/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_DeltaLatitude_H_
#define	_cam_DeltaLatitude_H_


#include <etsi_its_cam_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cam_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cam_DeltaLatitude {
	cam_DeltaLatitude_oneMicrodegreeNorth	= 10,
	cam_DeltaLatitude_oneMicrodegreeSouth	= -10,
	cam_DeltaLatitude_unavailable	= 131072
} e_cam_DeltaLatitude;

/* cam_DeltaLatitude */
typedef long	 cam_DeltaLatitude_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cam_DeltaLatitude_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cam_DeltaLatitude;
asn_struct_free_f cam_DeltaLatitude_free;
asn_struct_print_f cam_DeltaLatitude_print;
asn_constr_check_f cam_DeltaLatitude_constraint;
per_type_decoder_f cam_DeltaLatitude_decode_uper;
per_type_encoder_f cam_DeltaLatitude_encode_uper;
per_type_decoder_f cam_DeltaLatitude_decode_aper;
per_type_encoder_f cam_DeltaLatitude_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cam_DeltaLatitude_H_ */
#include <etsi_its_cam_coding/asn_internal.h>