/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_Masked_IMEISV_H_
#define	_Masked_IMEISV_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Masked-IMEISV */
typedef BIT_STRING_t	 Masked_IMEISV_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Masked_IMEISV;
asn_struct_free_f Masked_IMEISV_free;
asn_struct_print_f Masked_IMEISV_print;
asn_constr_check_f Masked_IMEISV_constraint;
ber_type_decoder_f Masked_IMEISV_decode_ber;
der_type_encoder_f Masked_IMEISV_encode_der;
xer_type_decoder_f Masked_IMEISV_decode_xer;
xer_type_encoder_f Masked_IMEISV_encode_xer;
oer_type_decoder_f Masked_IMEISV_decode_oer;
oer_type_encoder_f Masked_IMEISV_encode_oer;
per_type_decoder_f Masked_IMEISV_decode_uper;
per_type_encoder_f Masked_IMEISV_encode_uper;
per_type_decoder_f Masked_IMEISV_decode_aper;
per_type_encoder_f Masked_IMEISV_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Masked_IMEISV_H_ */
#include <asn_internal.h>
