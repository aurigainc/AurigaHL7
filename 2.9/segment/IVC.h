/*
 * hacca - C Toolkit and Applications for the HL7 2.x Protocols
 *           http://github.com/rcarbone/hacca
 *           http://hub.docker.com/repository/docker/roccocarbone/hacca
 *
 * Warning: This file was automatically generated, please do not edit.
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jul 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 */


#ifndef __IVC_v29_H__
#define __IVC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CP.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"

namespace HL7_29 {

/* IVC */
class IVC : public HL7Segment {
 public:
  IVC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    IVC_1,
    IVC_2,
    IVC_3,
    IVC_4,
    IVC_5,
    IVC_6,
    IVC_7,
    IVC_8,
    IVC_9,
    IVC_10,
    IVC_11,
    IVC_12,
    IVC_13,
    IVC_14,
    IVC_15,
    IVC_16,
    IVC_17,
    IVC_18,
    IVC_19,
    IVC_20,
    IVC_21,
    IVC_22,
    IVC_23,
    IVC_24,
    IVC_25,
    IVC_26,
    IVC_27,
    IVC_28,
    IVC_29,
    IVC_30,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "IVC"; }
  IVC* create() const { return new IVC(); }

 private:
  void init() {
    setName("IVC");
    /* Init members */
    addObject<EI>(IVC_1, "IVC.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(IVC_2, "IVC.2", HL7::initialized, HL7::repetition_off);
    addObject<EI>(IVC_3, "IVC.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IVC_4, "IVC.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IVC_5, "IVC.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IVC_6, "IVC.6", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(IVC_7, "IVC.7", HL7::initialized, HL7::repetition_off);
    addObject<CP>(IVC_8, "IVC.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IVC_9, "IVC.9", HL7::initialized, HL7::repetition_off);
    addObject<XON>(IVC_10, "IVC.10", HL7::initialized, HL7::repetition_off);
    addObject<XON>(IVC_11, "IVC.11", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(IVC_12, "IVC.12", HL7::initialized, HL7::repetition_off);
    addObject<ID>(IVC_13, "IVC.13", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(IVC_14, "IVC.14", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IVC_15, "IVC.15", HL7::initialized, HL7::repetition_off);
    addObject<CP>(IVC_16, "IVC.16", HL7::initialized, HL7::repetition_off);
    addObject<CP>(IVC_17, "IVC.17", HL7::initialized, HL7::repetition_off);
    addObject<CP>(IVC_18, "IVC.18", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(IVC_19, "IVC.19", HL7::initialized, HL7::repetition_off);
    addObject<CX>(IVC_20, "IVC.20", HL7::initialized, HL7::repetition_off);
    addObject<CP>(IVC_21, "IVC.21", HL7::initialized, HL7::repetition_off);
    addObject<CP>(IVC_22, "IVC.22", HL7::initialized, HL7::repetition_off);
    addObject<CP>(IVC_23, "IVC.23", HL7::initialized, HL7::repetition_off);
    addObject<NM>(IVC_24, "IVC.24", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IVC_25, "IVC.25", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IVC_26, "IVC.26", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IVC_27, "IVC.27", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IVC_28, "IVC.28", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IVC_29, "IVC.29", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IVC_30, "IVC.30", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Provider Invoice Number
   */

  EI* getIVC_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVC_1);
  }

  EI* getProviderInvoiceNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVC_1);
  }

  bool isIVC_1(size_t index = 0) {
    try {
      return this->getObject(index, IVC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderInvoiceNumber(size_t index = 0) {
    try {
      return this->getObject(index, IVC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payer Invoice Number
   */

  EI* getIVC_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVC_2);
  }

  EI* getPayerInvoiceNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVC_2);
  }

  bool isIVC_2(size_t index = 0) {
    try {
      return this->getObject(index, IVC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayerInvoiceNumber(size_t index = 0) {
    try {
      return this->getObject(index, IVC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contract/Agreement Number
   */

  EI* getIVC_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVC_3);
  }

  EI* getContractAgreementNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVC_3);
  }

  bool isIVC_3(size_t index = 0) {
    try {
      return this->getObject(index, IVC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractAgreementNumber(size_t index = 0) {
    try {
      return this->getObject(index, IVC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Invoice Control
   */

  CWE* getIVC_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVC_4);
  }

  CWE* getInvoiceControl(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVC_4);
  }

  bool isIVC_4(size_t index = 0) {
    try {
      return this->getObject(index, IVC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInvoiceControl(size_t index = 0) {
    try {
      return this->getObject(index, IVC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Invoice Reason
   */

  CWE* getIVC_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVC_5);
  }

  CWE* getInvoiceReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVC_5);
  }

  bool isIVC_5(size_t index = 0) {
    try {
      return this->getObject(index, IVC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInvoiceReason(size_t index = 0) {
    try {
      return this->getObject(index, IVC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Invoice Type
   */

  CWE* getIVC_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVC_6);
  }

  CWE* getInvoiceType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVC_6);
  }

  bool isIVC_6(size_t index = 0) {
    try {
      return this->getObject(index, IVC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInvoiceType(size_t index = 0) {
    try {
      return this->getObject(index, IVC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Invoice Date/Time
   */

  DTM* getIVC_7(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IVC_7);
  }

  DTM* getInvoiceDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IVC_7);
  }

  bool isIVC_7(size_t index = 0) {
    try {
      return this->getObject(index, IVC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInvoiceDateTime(size_t index = 0) {
    try {
      return this->getObject(index, IVC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Invoice Amount
   */

  CP* getIVC_8(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVC_8);
  }

  CP* getInvoiceAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVC_8);
  }

  bool isIVC_8(size_t index = 0) {
    try {
      return this->getObject(index, IVC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInvoiceAmount(size_t index = 0) {
    try {
      return this->getObject(index, IVC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payment Terms
   */

  ST* getIVC_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IVC_9);
  }

  ST* getPaymentTerms(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IVC_9);
  }

  bool isIVC_9(size_t index = 0) {
    try {
      return this->getObject(index, IVC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPaymentTerms(size_t index = 0) {
    try {
      return this->getObject(index, IVC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Organization
   */

  XON* getIVC_10(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IVC_10);
  }

  XON* getProviderOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IVC_10);
  }

  bool isIVC_10(size_t index = 0) {
    try {
      return this->getObject(index, IVC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderOrganization(size_t index = 0) {
    try {
      return this->getObject(index, IVC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payer Organization
   */

  XON* getIVC_11(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IVC_11);
  }

  XON* getPayerOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IVC_11);
  }

  bool isIVC_11(size_t index = 0) {
    try {
      return this->getObject(index, IVC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayerOrganization(size_t index = 0) {
    try {
      return this->getObject(index, IVC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Attention
   */

  XCN* getIVC_12(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IVC_12);
  }

  XCN* getAttention(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IVC_12);
  }

  bool isIVC_12(size_t index = 0) {
    try {
      return this->getObject(index, IVC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAttention(size_t index = 0) {
    try {
      return this->getObject(index, IVC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Last Invoice Indicator
   */

  ID* getIVC_13(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IVC_13);
  }

  ID* getLastInvoiceIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IVC_13);
  }

  bool isIVC_13(size_t index = 0) {
    try {
      return this->getObject(index, IVC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLastInvoiceIndicator(size_t index = 0) {
    try {
      return this->getObject(index, IVC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Invoice Booking Period
   */

  DTM* getIVC_14(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IVC_14);
  }

  DTM* getInvoiceBookingPeriod(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IVC_14);
  }

  bool isIVC_14(size_t index = 0) {
    try {
      return this->getObject(index, IVC_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInvoiceBookingPeriod(size_t index = 0) {
    try {
      return this->getObject(index, IVC_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Origin
   */

  ST* getIVC_15(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IVC_15);
  }

  ST* getOrigin(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IVC_15);
  }

  bool isIVC_15(size_t index = 0) {
    try {
      return this->getObject(index, IVC_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrigin(size_t index = 0) {
    try {
      return this->getObject(index, IVC_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Invoice Fixed Amount
   */

  CP* getIVC_16(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVC_16);
  }

  CP* getInvoiceFixedAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVC_16);
  }

  bool isIVC_16(size_t index = 0) {
    try {
      return this->getObject(index, IVC_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInvoiceFixedAmount(size_t index = 0) {
    try {
      return this->getObject(index, IVC_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Costs
   */

  CP* getIVC_17(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVC_17);
  }

  CP* getSpecialCosts(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVC_17);
  }

  bool isIVC_17(size_t index = 0) {
    try {
      return this->getObject(index, IVC_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialCosts(size_t index = 0) {
    try {
      return this->getObject(index, IVC_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Amount for Doctors Treatment
   */

  CP* getIVC_18(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVC_18);
  }

  CP* getAmountforDoctorsTreatment(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVC_18);
  }

  bool isIVC_18(size_t index = 0) {
    try {
      return this->getObject(index, IVC_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAmountforDoctorsTreatment(size_t index = 0) {
    try {
      return this->getObject(index, IVC_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Responsible Physician
   */

  XCN* getIVC_19(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IVC_19);
  }

  XCN* getResponsiblePhysician(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IVC_19);
  }

  bool isIVC_19(size_t index = 0) {
    try {
      return this->getObject(index, IVC_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResponsiblePhysician(size_t index = 0) {
    try {
      return this->getObject(index, IVC_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cost Center
   */

  CX* getIVC_20(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IVC_20);
  }

  CX* getCostCenter(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IVC_20);
  }

  bool isIVC_20(size_t index = 0) {
    try {
      return this->getObject(index, IVC_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCostCenter(size_t index = 0) {
    try {
      return this->getObject(index, IVC_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Invoice Prepaid Amount
   */

  CP* getIVC_21(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVC_21);
  }

  CP* getInvoicePrepaidAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVC_21);
  }

  bool isIVC_21(size_t index = 0) {
    try {
      return this->getObject(index, IVC_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInvoicePrepaidAmount(size_t index = 0) {
    try {
      return this->getObject(index, IVC_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Total Invoice Amount without Prepaid
   */

  CP* getIVC_22(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVC_22);
  }

  CP* getTotalInvoiceAmountwithoutPrepaid(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVC_22);
  }

  bool isIVC_22(size_t index = 0) {
    try {
      return this->getObject(index, IVC_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotalInvoiceAmountwithoutPrepaid(size_t index = 0) {
    try {
      return this->getObject(index, IVC_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Total-Amount of VAT
   */

  CP* getIVC_23(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVC_23);
  }

  CP* getTotalAmountofVAT(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVC_23);
  }

  bool isIVC_23(size_t index = 0) {
    try {
      return this->getObject(index, IVC_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotalAmountofVAT(size_t index = 0) {
    try {
      return this->getObject(index, IVC_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * VAT-Rates applied
   */

  NM* getIVC_24(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IVC_24);
  }

  NM* getVATRatesapplied(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IVC_24);
  }

  bool isIVC_24(size_t index = 0) {
    try {
      return this->getObject(index, IVC_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVATRatesapplied(size_t index = 0) {
    try {
      return this->getObject(index, IVC_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Benefit Group
   */

  CWE* getIVC_25(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVC_25);
  }

  CWE* getBenefitGroup(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVC_25);
  }

  bool isIVC_25(size_t index = 0) {
    try {
      return this->getObject(index, IVC_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBenefitGroup(size_t index = 0) {
    try {
      return this->getObject(index, IVC_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Tax ID
   */

  ST* getIVC_26(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IVC_26);
  }

  ST* getProviderTaxID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IVC_26);
  }

  bool isIVC_26(size_t index = 0) {
    try {
      return this->getObject(index, IVC_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderTaxID(size_t index = 0) {
    try {
      return this->getObject(index, IVC_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payer Tax ID
   */

  ST* getIVC_27(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IVC_27);
  }

  ST* getPayerTaxID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IVC_27);
  }

  bool isIVC_27(size_t index = 0) {
    try {
      return this->getObject(index, IVC_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayerTaxID(size_t index = 0) {
    try {
      return this->getObject(index, IVC_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Tax Status
   */

  CWE* getIVC_28(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVC_28);
  }

  CWE* getProviderTaxStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVC_28);
  }

  bool isIVC_28(size_t index = 0) {
    try {
      return this->getObject(index, IVC_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderTaxStatus(size_t index = 0) {
    try {
      return this->getObject(index, IVC_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payer Tax Status
   */

  CWE* getIVC_29(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVC_29);
  }

  CWE* getPayerTaxStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVC_29);
  }

  bool isIVC_29(size_t index = 0) {
    try {
      return this->getObject(index, IVC_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayerTaxStatus(size_t index = 0) {
    try {
      return this->getObject(index, IVC_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sales Tax ID
   */

  ST* getIVC_30(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IVC_30);
  }

  ST* getSalesTaxID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IVC_30);
  }

  bool isIVC_30(size_t index = 0) {
    try {
      return this->getObject(index, IVC_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSalesTaxID(size_t index = 0) {
    try {
      return this->getObject(index, IVC_30) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of IVC */

} /* End of namespace HL7_29 */
#endif /* __IVC_v29_H__ */
