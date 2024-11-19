/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=vam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#include "etsi_its_vam_ts_coding/vam_ts_VruSubProfilePedestrian.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_vam_ts_VruSubProfilePedestrian_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_vam_ts_VruSubProfilePedestrian_value2enum_1[] = {
	{ 0,	11,	"unavailable" },
	{ 1,	19,	"ordinary-pedestrian" },
	{ 2,	11,	"road-worker" },
	{ 3,	15,	"first-responder" },
	{ 15,	3,	"max" }
};
static const unsigned int asn_MAP_vam_ts_VruSubProfilePedestrian_enum2value_1[] = {
	3,	/* first-responder(3) */
	4,	/* max(15) */
	1,	/* ordinary-pedestrian(1) */
	2,	/* road-worker(2) */
	0	/* unavailable(0) */
};
const asn_INTEGER_specifics_t asn_SPC_vam_ts_VruSubProfilePedestrian_specs_1 = {
	asn_MAP_vam_ts_VruSubProfilePedestrian_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_vam_ts_VruSubProfilePedestrian_enum2value_1,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_vam_ts_VruSubProfilePedestrian_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_vam_ts_VruSubProfilePedestrian = {
	"VruSubProfilePedestrian",
	"VruSubProfilePedestrian",
	&asn_OP_NativeEnumerated,
	asn_DEF_vam_ts_VruSubProfilePedestrian_tags_1,
	sizeof(asn_DEF_vam_ts_VruSubProfilePedestrian_tags_1)
		/sizeof(asn_DEF_vam_ts_VruSubProfilePedestrian_tags_1[0]), /* 1 */
	asn_DEF_vam_ts_VruSubProfilePedestrian_tags_1,	/* Same as above */
	sizeof(asn_DEF_vam_ts_VruSubProfilePedestrian_tags_1)
		/sizeof(asn_DEF_vam_ts_VruSubProfilePedestrian_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_vam_ts_VruSubProfilePedestrian_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_vam_ts_VruSubProfilePedestrian_specs_1	/* Additional specs */
};

