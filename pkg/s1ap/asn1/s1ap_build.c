#include "S1AP-PDU.h"
#include "SuccessfulOutcome.h"
#include "InitiatingMessage.h"
#include "ProtocolIE-Field.h"
#include "ServedGUMMEIsItem.h"

#define PLMN_ID_LEN 3

void
s1ap_buffer_to_OCTET_STRING(void *buf, int size, TBCD_STRING_t *tbcd_string)
{
  tbcd_string->size = size;
  tbcd_string->buf = calloc(tbcd_string->size, 1);

  memcpy(tbcd_string->buf, buf, size);
}

void
S1SetupResponseBuild(S1AP_PDU_t *pdu, int num_served_gummei)
{
  SuccessfulOutcome_t *outcome = calloc(sizeof(SuccessfulOutcome_t), 1);
  S1SetupResponse_t *response = NULL;
  S1SetupResponseIEs_t *ie = NULL;
  ServedGUMMEIs_t *gmmei = NULL;
  ServedGUMMEIsItem_t *gmmei_item = NULL;
  RelativeMMECapacity_t *relative = NULL;

  memset(pdu, 0, sizeof(S1AP_PDU_t));
  pdu->present = S1AP_PDU_PR_successfulOutcome;
  pdu->choice.successfulOutcome = outcome;

  outcome->procedureCode = ProcedureCode_id_S1Setup;
  outcome->criticality = Criticality_reject;
  outcome->value.present = SuccessfulOutcome__value_PR_S1SetupResponse;

  response = &outcome->value.choice.S1SetupResponse;

  // ProtocolIEs for served GUMMEI.
  ie = calloc(sizeof(S1SetupResponseIEs_t), 1);
  ASN_SEQUENCE_ADD(&response->protocolIEs, ie);

  // Served GUMMEI.
  ie->id = ProtocolIE_ID_id_ServedGUMMEIs;
  ie->criticality = Criticality_reject;
  ie->value.present = S1SetupResponseIEs__value_PR_ServedGUMMEIs;

  // GMMEI and GMMEI items.
  gmmei = &ie->value.choice.ServedGUMMEIs;
  gmmei_item = calloc(sizeof(ServedGUMMEIsItem_t), 1);

  // PLMN.
  PLMNidentity_t *plmn = calloc(sizeof(PLMNidentity_t), 1);
  unsigned char plmn_data[3] = { 0x02, 0xf8, 0x39 };
  s1ap_buffer_to_OCTET_STRING(plmn_data, PLMN_ID_LEN, plmn);
  ASN_SEQUENCE_ADD(&gmmei_item->servedPLMNs.list, plmn);

  // Group ID.
  MME_Group_ID_t *group = calloc(sizeof(MME_Group_ID_t), 1);
  unsigned char group_data[2] = { 0x00, 0x04 };
  s1ap_buffer_to_OCTET_STRING(group_data, 2, group);
  ASN_SEQUENCE_ADD(&gmmei_item->servedGroupIDs.list, group);

  // MME Code.
  MME_Code_t *mme_code = calloc(sizeof(MME_Code_t), 1);
  unsigned char mme_code_data[2] = { 0x01 };
  s1ap_buffer_to_OCTET_STRING(mme_code_data, 1, mme_code);
  ASN_SEQUENCE_ADD(&gmmei_item->servedMMECs.list, mme_code);

  ASN_SEQUENCE_ADD(&gmmei->list, gmmei_item);

  // ProtocolIEs for relative MME capacity.
  ie = calloc(sizeof(S1SetupResponseIEs_t), 1);
  ASN_SEQUENCE_ADD(&response->protocolIEs, ie);

  // Relative MME capacity.
  ie->id = ProtocolIE_ID_id_RelativeMMECapacity;
  ie->criticality = Criticality_ignore;
  ie->value.present = S1SetupResponseIEs__value_PR_RelativeMMECapacity;

  // Relative MME capacity value.
  relative = &ie->value.choice.RelativeMMECapacity;
  *relative = 10;
}

void
S1SetupFailureBuild(S1AP_PDU_t *pdu)
{
}

void
DownlinkNASTransportBuild(S1AP_PDU_t *pdu, long enb_ie_s1ap_id, unsigned char *mmebuf, int mmebuf_len)
{
  InitiatingMessage_t *initiating = calloc(sizeof(InitiatingMessage_t), 1);
  DownlinkNASTransport_t *downlink = NULL;
  DownlinkNASTransport_IEs_t *ie = NULL;
  MME_UE_S1AP_ID_t *mme_ue_s1ap_id = NULL;
  ENB_UE_S1AP_ID_t *enb_ue_s1ap_id = NULL;
  NAS_PDU_t *nas_pdu = NULL;

  memset(pdu, 0, sizeof(S1AP_PDU_t));

  pdu->present = S1AP_PDU_PR_initiatingMessage;
  pdu->choice.initiatingMessage = initiating;

  initiating->procedureCode = ProcedureCode_id_downlinkNASTransport;
  initiating->criticality = Criticality_ignore;
  initiating->value.present = InitiatingMessage__value_PR_DownlinkNASTransport;

  downlink = &initiating->value.choice.DownlinkNASTransport;

  // MME UE.
  ie = calloc(sizeof(DownlinkNASTransport_IEs_t), 1);
  ASN_SEQUENCE_ADD(&downlink->protocolIEs, ie);

  ie->id = ProtocolIE_ID_id_MME_UE_S1AP_ID;
  ie->criticality = Criticality_reject;
  ie->value.present = DownlinkNASTransport_IEs__value_PR_ENB_UE_S1AP_ID;

  mme_ue_s1ap_id = &ie->value.choice.MME_UE_S1AP_ID;

  // eNB UE.
  ie = calloc(sizeof(DownlinkNASTransport_IEs_t), 1);
  ASN_SEQUENCE_ADD(&downlink->protocolIEs, ie);

  ie->id = ProtocolIE_ID_id_eNB_UE_S1AP_ID;
  ie->criticality = Criticality_reject;
  ie->value.present = DownlinkNASTransport_IEs__value_PR_ENB_UE_S1AP_ID;

  enb_ue_s1ap_id = &ie->value.choice.ENB_UE_S1AP_ID;

  // NAS PDU.
  ie = calloc(sizeof(DownlinkNASTransport_IEs_t), 1);
  ASN_SEQUENCE_ADD(&downlink->protocolIEs, ie);

  ie->id = ProtocolIE_ID_id_NAS_PDU;
  ie->criticality = Criticality_reject;
  ie->value.present = DownlinkNASTransport_IEs__value_PR_NAS_PDU;

  nas_pdu = &ie->value.choice.NAS_PDU;

  // Fill in values.
  *mme_ue_s1ap_id = 1;
  *enb_ue_s1ap_id = enb_ie_s1ap_id;

  nas_pdu->size = mmebuf_len;
  nas_pdu->buf = calloc(mmebuf_len, 1);
  memcpy(nas_pdu->buf, mmebuf, mmebuf_len);
}

void
UplinkNASTransportBuild(S1AP_PDU_t *pdu)
{
}

void
InitialContextSetupRequestBuild(S1AP_PDU_t *pdu, long enb_ie_s1ap_id)
{
  InitiatingMessage_t *initiating = calloc(sizeof(InitiatingMessage_t), 1);
  InitialContextSetupRequest_t *context = NULL;
  InitialContextSetupRequestIEs_t *ie = NULL;
  MME_UE_S1AP_ID_t *mme_ue_s1ap_id = NULL;
  ENB_UE_S1AP_ID_t *enb_ue_s1ap_id = NULL;
  UEAggregateMaximumBitrate_t *max_bitrate = NULL;
  E_RABToBeSetupListCtxtSUReq_t *setup_list = NULL;
  UESecurityCapabilities_t *sec_cap = NULL;
  SecurityKey_t *sec_key = NULL;

  memset(pdu, 0, sizeof(S1AP_PDU_t));

  pdu->present = S1AP_PDU_PR_initiatingMessage;
  pdu->choice.initiatingMessage = initiating;

  initiating->procedureCode = ProcedureCode_id_InitialContextSetup;
  initiating->criticality = Criticality_reject;
  initiating->value.present = InitiatingMessage__value_PR_InitialContextSetupRequest;

  context = &initiating->value.choice.InitialContextSetupRequest;

  // MME UE.
  ie = calloc(sizeof(InitialContextSetupRequestIEs_t), 1);
  ASN_SEQUENCE_ADD(&context->protocolIEs, ie);

  ie->id = ProtocolIE_ID_id_MME_UE_S1AP_ID;
  ie->criticality = Criticality_reject;
  ie->value.present = InitialContextSetupRequestIEs__value_PR_ENB_UE_S1AP_ID;

  mme_ue_s1ap_id = &ie->value.choice.MME_UE_S1AP_ID;

  // eNB UE.
  ie = calloc(sizeof(InitialContextSetupRequestIEs_t), 1);
  ASN_SEQUENCE_ADD(&context->protocolIEs, ie);

  ie->id = ProtocolIE_ID_id_eNB_UE_S1AP_ID;
  ie->criticality = Criticality_reject;
  ie->value.present = InitialContextSetupRequestIEs__value_PR_ENB_UE_S1AP_ID;

  enb_ue_s1ap_id = &ie->value.choice.ENB_UE_S1AP_ID;

  // Fill in values.
  *mme_ue_s1ap_id = 1;
  *enb_ue_s1ap_id = enb_ie_s1ap_id;

  // uEAggregate_MaximumBitrates
  ie = calloc(sizeof(InitialContextSetupRequestIEs_t), 1);
  ASN_SEQUENCE_ADD(&context->protocolIEs, ie);

  ie->id = ProtocolIE_ID_id_uEaggregateMaximumBitrate;
  ie->criticality = Criticality_reject;
  ie->value.present = InitialContextSetupRequestIEs__value_PR_UEAggregateMaximumBitrate;

  max_bitrate = &ie->value.choice.UEAggregateMaximumBitrate;

  asn_uint642INTEGER(&max_bitrate->uEaggregateMaximumBitRateDL, 200000000);
  asn_uint642INTEGER(&max_bitrate->uEaggregateMaximumBitRateUL, 100000000);

  // E_RABToBeSetupListCtxtSUReq
  /* ie = calloc(sizeof(InitialContextSetupRequestIEs_t), 1); */
  /* ASN_SEQUENCE_ADD(&context->protocolIEs, ie); */

  /* ie->id = ProtocolIE_ID_id_E_RABToBeSetupListCtxtSUReq; */
  /* ie->criticality = Criticality_reject; */
  /* ie->value.present = InitialContextSetupRequestIEs__value_PR_E_RABToBeSetupListCtxtSUReq; */

  /* setup_list = &ie->value.choice.E_RABToBeSetupListCtxtSUReq; */

  // UESecurityCapabilities
  /* ie = calloc(sizeof(InitialContextSetupRequestIEs_t), 1); */
  /* ASN_SEQUENCE_ADD(&context->protocolIEs, ie); */

  /* ie->id = ProtocolIE_ID_id_UESecurityCapabilities; */
  /* ie->criticality = Criticality_reject; */
  /* ie->value.present = InitialContextSetupRequestIEs__value_PR_UESecurityCapabilities; */

  /* sec_cap = &ie->value.choice.UESecurityCapabilities; */

  // SecurityKey
  /* ie = calloc(sizeof(InitialContextSetupRequestIEs_t), 1); */
  /* ASN_SEQUENCE_ADD(&context->protocolIEs, ie); */

  /* ie->id = ProtocolIE_ID_id_SecurityKey; */
  /* ie->criticality = Criticality_reject; */
  /* ie->value.present =InitialContextSetupRequestIEs__value_PR_SecurityKey; */

  /* sec_key = &ie->value.choice.SecurityKey; */
}
