/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_Correlation_ID_H_
#define	_Correlation_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Correlation-ID */
typedef OCTET_STRING_t	 Correlation_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Correlation_ID;
asn_struct_free_f Correlation_ID_free;
asn_struct_print_f Correlation_ID_print;
asn_constr_check_f Correlation_ID_constraint;
ber_type_decoder_f Correlation_ID_decode_ber;
der_type_encoder_f Correlation_ID_encode_der;
xer_type_decoder_f Correlation_ID_decode_xer;
xer_type_encoder_f Correlation_ID_encode_xer;
oer_type_decoder_f Correlation_ID_decode_oer;
oer_type_encoder_f Correlation_ID_encode_oer;
per_type_decoder_f Correlation_ID_decode_uper;
per_type_encoder_f Correlation_ID_encode_uper;
per_type_decoder_f Correlation_ID_decode_aper;
per_type_encoder_f Correlation_ID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Correlation_ID_H_ */
#include <asn_internal.h>
