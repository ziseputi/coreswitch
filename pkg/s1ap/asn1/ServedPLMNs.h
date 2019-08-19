/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_ServedPLMNs_H_
#define	_ServedPLMNs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMNidentity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ServedPLMNs */
typedef struct ServedPLMNs {
	A_SEQUENCE_OF(PLMNidentity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedPLMNs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServedPLMNs;
extern asn_SET_OF_specifics_t asn_SPC_ServedPLMNs_specs_1;
extern asn_TYPE_member_t asn_MBR_ServedPLMNs_1[1];
extern asn_per_constraints_t asn_PER_type_ServedPLMNs_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ServedPLMNs_H_ */
#include <asn_internal.h>
