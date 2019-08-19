/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_DownlinkS1cdma2000tunnelling_H_
#define	_DownlinkS1cdma2000tunnelling_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DownlinkS1cdma2000tunnelling */
typedef struct DownlinkS1cdma2000tunnelling {
	ProtocolIE_Container_6551P49_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DownlinkS1cdma2000tunnelling_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DownlinkS1cdma2000tunnelling;
extern asn_SEQUENCE_specifics_t asn_SPC_DownlinkS1cdma2000tunnelling_specs_1;
extern asn_TYPE_member_t asn_MBR_DownlinkS1cdma2000tunnelling_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _DownlinkS1cdma2000tunnelling_H_ */
#include <asn_internal.h>
