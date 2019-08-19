/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_SourceOfUEActivityBehaviourInformation_H_
#define	_SourceOfUEActivityBehaviourInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SourceOfUEActivityBehaviourInformation {
	SourceOfUEActivityBehaviourInformation_subscription_information	= 0,
	SourceOfUEActivityBehaviourInformation_statistics	= 1
	/*
	 * Enumeration is extensible
	 */
} e_SourceOfUEActivityBehaviourInformation;

/* SourceOfUEActivityBehaviourInformation */
typedef long	 SourceOfUEActivityBehaviourInformation_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SourceOfUEActivityBehaviourInformation_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SourceOfUEActivityBehaviourInformation;
extern const asn_INTEGER_specifics_t asn_SPC_SourceOfUEActivityBehaviourInformation_specs_1;
asn_struct_free_f SourceOfUEActivityBehaviourInformation_free;
asn_struct_print_f SourceOfUEActivityBehaviourInformation_print;
asn_constr_check_f SourceOfUEActivityBehaviourInformation_constraint;
ber_type_decoder_f SourceOfUEActivityBehaviourInformation_decode_ber;
der_type_encoder_f SourceOfUEActivityBehaviourInformation_encode_der;
xer_type_decoder_f SourceOfUEActivityBehaviourInformation_decode_xer;
xer_type_encoder_f SourceOfUEActivityBehaviourInformation_encode_xer;
oer_type_decoder_f SourceOfUEActivityBehaviourInformation_decode_oer;
oer_type_encoder_f SourceOfUEActivityBehaviourInformation_encode_oer;
per_type_decoder_f SourceOfUEActivityBehaviourInformation_decode_uper;
per_type_encoder_f SourceOfUEActivityBehaviourInformation_encode_uper;
per_type_decoder_f SourceOfUEActivityBehaviourInformation_decode_aper;
per_type_encoder_f SourceOfUEActivityBehaviourInformation_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SourceOfUEActivityBehaviourInformation_H_ */
#include <asn_internal.h>