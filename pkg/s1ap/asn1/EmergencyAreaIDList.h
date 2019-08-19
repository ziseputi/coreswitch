/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_EmergencyAreaIDList_H_
#define	_EmergencyAreaIDList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EmergencyAreaID.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EmergencyAreaIDList */
typedef struct EmergencyAreaIDList {
	A_SEQUENCE_OF(EmergencyAreaID_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EmergencyAreaIDList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EmergencyAreaIDList;
extern asn_SET_OF_specifics_t asn_SPC_EmergencyAreaIDList_specs_1;
extern asn_TYPE_member_t asn_MBR_EmergencyAreaIDList_1[1];
extern asn_per_constraints_t asn_PER_type_EmergencyAreaIDList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _EmergencyAreaIDList_H_ */
#include <asn_internal.h>
