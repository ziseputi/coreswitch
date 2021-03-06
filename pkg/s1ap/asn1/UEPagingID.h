/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_UEPagingID_H_
#define	_UEPagingID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IMSI.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEPagingID_PR {
	UEPagingID_PR_NOTHING,	/* No components present */
	UEPagingID_PR_s_TMSI,
	UEPagingID_PR_iMSI
	/* Extensions may appear below */
	
} UEPagingID_PR;

/* Forward declarations */
struct S_TMSI;

/* UEPagingID */
typedef struct UEPagingID {
	UEPagingID_PR present;
	union UEPagingID_u {
		struct S_TMSI	*s_TMSI;
		IMSI_t	 iMSI;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEPagingID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEPagingID;

#ifdef __cplusplus
}
#endif

#endif	/* _UEPagingID_H_ */
#include <asn_internal.h>
