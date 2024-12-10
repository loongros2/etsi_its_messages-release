/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */


/* Including external dependencies */
#include "etsi_its_mapem_ts_coding/mapem_ts_Node-XY-20b.h"
#include "etsi_its_mapem_ts_coding/mapem_ts_Node-XY-22b.h"
#include "etsi_its_mapem_ts_coding/mapem_ts_Node-XY-24b.h"
#include "etsi_its_mapem_ts_coding/mapem_ts_Node-XY-26b.h"
#include "etsi_its_mapem_ts_coding/mapem_ts_Node-XY-28b.h"
#include "etsi_its_mapem_ts_coding/mapem_ts_Node-XY-32b.h"
#include "etsi_its_mapem_ts_coding/mapem_ts_Node-LLmD-64b.h"
#include "etsi_its_mapem_ts_coding/mapem_ts_RegionalExtension.h"
#include <etsi_its_mapem_ts_coding/constr_CHOICE.h>
#ifndef	_mapem_ts_NodeOffsetPointXY_H_
#define	_mapem_ts_NodeOffsetPointXY_H_


#include <etsi_its_mapem_ts_coding/asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum mapem_ts_NodeOffsetPointXY_PR {
	mapem_ts_NodeOffsetPointXY_PR_NOTHING,	/* No components present */
	mapem_ts_NodeOffsetPointXY_PR_node_XY1,
	mapem_ts_NodeOffsetPointXY_PR_node_XY2,
	mapem_ts_NodeOffsetPointXY_PR_node_XY3,
	mapem_ts_NodeOffsetPointXY_PR_node_XY4,
	mapem_ts_NodeOffsetPointXY_PR_node_XY5,
	mapem_ts_NodeOffsetPointXY_PR_node_XY6,
	mapem_ts_NodeOffsetPointXY_PR_node_LatLon,
	mapem_ts_NodeOffsetPointXY_PR_regional
} mapem_ts_NodeOffsetPointXY_PR;

/* mapem_ts_NodeOffsetPointXY */
typedef struct mapem_ts_NodeOffsetPointXY {
	mapem_ts_NodeOffsetPointXY_PR present;
	union mapem_ts_NodeOffsetPointXY_u {
		mapem_ts_Node_XY_20b_t	 node_XY1;
		mapem_ts_Node_XY_22b_t	 node_XY2;
		mapem_ts_Node_XY_24b_t	 node_XY3;
		mapem_ts_Node_XY_26b_t	 node_XY4;
		mapem_ts_Node_XY_28b_t	 node_XY5;
		mapem_ts_Node_XY_32b_t	 node_XY6;
		mapem_ts_Node_LLmD_64b_t	 node_LatLon;
		mapem_ts_Reg_NodeOffsetPointXY_t	 regional;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} mapem_ts_NodeOffsetPointXY_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_mapem_ts_NodeOffsetPointXY;
extern asn_CHOICE_specifics_t asn_SPC_mapem_ts_NodeOffsetPointXY_specs_1;
extern asn_TYPE_member_t asn_MBR_mapem_ts_NodeOffsetPointXY_1[8];
extern asn_per_constraints_t asn_PER_type_mapem_ts_NodeOffsetPointXY_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _mapem_ts_NodeOffsetPointXY_H_ */
#include <etsi_its_mapem_ts_coding/asn_internal.h>