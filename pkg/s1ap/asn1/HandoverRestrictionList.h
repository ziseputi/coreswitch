/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_HandoverRestrictionList_H_
#define	_HandoverRestrictionList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMNidentity.h"
#include "ForbiddenInterRATs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EPLMNs;
struct ForbiddenTAs;
struct ForbiddenLAs;
struct ProtocolExtensionContainer;

/* HandoverRestrictionList */
typedef struct HandoverRestrictionList {
	PLMNidentity_t	 servingPLMN;
	struct EPLMNs	*equivalentPLMNs;	/* OPTIONAL */
	struct ForbiddenTAs	*forbiddenTAs;	/* OPTIONAL */
	struct ForbiddenLAs	*forbiddenLAs;	/* OPTIONAL */
	ForbiddenInterRATs_t	*forbiddenInterRATs;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverRestrictionList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverRestrictionList;

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverRestrictionList_H_ */
#include <asn_internal.h>
