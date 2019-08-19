/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_M1ThresholdEventA2_H_
#define	_M1ThresholdEventA2_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementThresholdA2.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* M1ThresholdEventA2 */
typedef struct M1ThresholdEventA2 {
	MeasurementThresholdA2_t	 measurementThreshold;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M1ThresholdEventA2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M1ThresholdEventA2;
extern asn_SEQUENCE_specifics_t asn_SPC_M1ThresholdEventA2_specs_1;
extern asn_TYPE_member_t asn_MBR_M1ThresholdEventA2_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _M1ThresholdEventA2_H_ */
#include <asn_internal.h>
