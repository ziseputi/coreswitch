/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#include "SourceBSS-ToTargetBSS-TransparentContainer.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_SourceBSS_ToTargetBSS_TransparentContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SourceBSS_ToTargetBSS_TransparentContainer = {
	"SourceBSS-ToTargetBSS-TransparentContainer",
	"SourceBSS-ToTargetBSS-TransparentContainer",
	&asn_OP_OCTET_STRING,
	asn_DEF_SourceBSS_ToTargetBSS_TransparentContainer_tags_1,
	sizeof(asn_DEF_SourceBSS_ToTargetBSS_TransparentContainer_tags_1)
		/sizeof(asn_DEF_SourceBSS_ToTargetBSS_TransparentContainer_tags_1[0]), /* 1 */
	asn_DEF_SourceBSS_ToTargetBSS_TransparentContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_SourceBSS_ToTargetBSS_TransparentContainer_tags_1)
		/sizeof(asn_DEF_SourceBSS_ToTargetBSS_TransparentContainer_tags_1[0]), /* 1 */
	{ 0, 0, OCTET_STRING_constraint },
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

