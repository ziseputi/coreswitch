/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_GUMMEIType_H_
#define	_GUMMEIType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GUMMEIType {
	GUMMEIType_native	= 0,
	GUMMEIType_mapped	= 1
	/*
	 * Enumeration is extensible
	 */
} e_GUMMEIType;

/* GUMMEIType */
typedef long	 GUMMEIType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GUMMEIType;
asn_struct_free_f GUMMEIType_free;
asn_struct_print_f GUMMEIType_print;
asn_constr_check_f GUMMEIType_constraint;
ber_type_decoder_f GUMMEIType_decode_ber;
der_type_encoder_f GUMMEIType_encode_der;
xer_type_decoder_f GUMMEIType_decode_xer;
xer_type_encoder_f GUMMEIType_encode_xer;
oer_type_decoder_f GUMMEIType_decode_oer;
oer_type_encoder_f GUMMEIType_encode_oer;
per_type_decoder_f GUMMEIType_decode_uper;
per_type_encoder_f GUMMEIType_encode_uper;
per_type_decoder_f GUMMEIType_decode_aper;
per_type_encoder_f GUMMEIType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _GUMMEIType_H_ */
#include <asn_internal.h>
