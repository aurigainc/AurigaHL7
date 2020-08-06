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


#ifndef __FT1_v29_H__
#define __FT1_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CP.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DR.h"
#include "../datatype/DT.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/MO.h"
#include "../datatype/NM.h"
#include "../datatype/PL.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"

namespace HL7_29 {

/* FT1 */
class FT1 : public HL7Segment {
 public:
  FT1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    FT1_1,
    FT1_2,
    FT1_3,
    FT1_4,
    FT1_5,
    FT1_6,
    FT1_7,
    FT1_8,
    FT1_9,
    FT1_10,
    FT1_11,
    FT1_12,
    FT1_13,
    FT1_14,
    FT1_15,
    FT1_16,
    FT1_17,
    FT1_18,
    FT1_19,
    FT1_20,
    FT1_21,
    FT1_22,
    FT1_23,
    FT1_24,
    FT1_25,
    FT1_26,
    FT1_27,
    FT1_28,
    FT1_29,
    FT1_30,
    FT1_31,
    FT1_32,
    FT1_33,
    FT1_34,
    FT1_35,
    FT1_36,
    FT1_37,
    FT1_38,
    FT1_39,
    FT1_40,
    FT1_41,
    FT1_42,
    FT1_43,
    FT1_44,
    FT1_45,
    FT1_46,
    FT1_47,
    FT1_48,
    FT1_49,
    FT1_50,
    FT1_51,
    FT1_52,
    FT1_53,
    FT1_54,
    FT1_55,
    FT1_56,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "FT1"; }
  FT1* create() const { return new FT1(); }

 private:
  void init() {
    setName("FT1");
    /* Init members */
    addObject<SI>(FT1_1, "FT1.1", HL7::initialized, HL7::repetition_off);
    addObject<CX>(FT1_2, "FT1.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FT1_3, "FT1.3", HL7::initialized, HL7::repetition_off);
    addObject<DR>(FT1_4, "FT1.4", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(FT1_5, "FT1.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_6, "FT1.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_7, "FT1.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FT1_8, "FT1.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FT1_9, "FT1.9", HL7::initialized, HL7::repetition_off);
    addObject<NM>(FT1_10, "FT1.10", HL7::initialized, HL7::repetition_off);
    addObject<CP>(FT1_11, "FT1.11", HL7::initialized, HL7::repetition_off);
    addObject<CP>(FT1_12, "FT1.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_13, "FT1.13", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_14, "FT1.14", HL7::initialized, HL7::repetition_off);
    addObject<CP>(FT1_15, "FT1.15", HL7::initialized, HL7::repetition_off);
    addObject<PL>(FT1_16, "FT1.16", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_17, "FT1.17", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_18, "FT1.18", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_19, "FT1.19", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(FT1_20, "FT1.20", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(FT1_21, "FT1.21", HL7::initialized, HL7::repetition_off);
    addObject<CP>(FT1_22, "FT1.22", HL7::initialized, HL7::repetition_off);
    addObject<EI>(FT1_23, "FT1.23", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(FT1_24, "FT1.24", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(FT1_25, "FT1.25", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(FT1_26, "FT1.26", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_27, "FT1.27", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_28, "FT1.28", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_29, "FT1.29", HL7::initialized, HL7::repetition_off);
    addObject<CX>(FT1_30, "FT1.30", HL7::initialized, HL7::repetition_off);
    addObject<SI>(FT1_31, "FT1.31", HL7::initialized, HL7::repetition_off);
    addObject<XON>(FT1_32, "FT1.32", HL7::initialized, HL7::repetition_off);
    addObject<XON>(FT1_33, "FT1.33", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_34, "FT1.34", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FT1_35, "FT1.35", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_36, "FT1.36", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_37, "FT1.37", HL7::initialized, HL7::repetition_off);
    addObject<CX>(FT1_38, "FT1.38", HL7::initialized, HL7::repetition_off);
    addObject<CX>(FT1_39, "FT1.39", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_40, "FT1.40", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_41, "FT1.41", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FT1_42, "FT1.42", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(FT1_43, "FT1.43", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_44, "FT1.44", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_45, "FT1.45", HL7::initialized, HL7::repetition_off);
    addObject<NM>(FT1_46, "FT1.46", HL7::initialized, HL7::repetition_off);
    addObject<DT>(FT1_47, "FT1.47", HL7::initialized, HL7::repetition_off);
    addObject<DT>(FT1_48, "FT1.48", HL7::initialized, HL7::repetition_off);
    addObject<DT>(FT1_49, "FT1.49", HL7::initialized, HL7::repetition_off);
    addObject<NM>(FT1_50, "FT1.50", HL7::initialized, HL7::repetition_off);
    addObject<MO>(FT1_51, "FT1.51", HL7::initialized, HL7::repetition_off);
    addObject<MO>(FT1_52, "FT1.52", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_53, "FT1.53", HL7::initialized, HL7::repetition_off);
    addObject<ID>(FT1_54, "FT1.54", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_55, "FT1.55", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FT1_56, "FT1.56", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - FT1
   */

  SI* getFT1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, FT1_1);
  }

  SI* getSetIDFT1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, FT1_1);
  }

  bool isFT1_1(size_t index = 0) {
    try {
      return this->getObject(index, FT1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDFT1(size_t index = 0) {
    try {
      return this->getObject(index, FT1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction ID
   */

  CX* getFT1_2(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, FT1_2);
  }

  CX* getTransactionID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, FT1_2);
  }

  bool isFT1_2(size_t index = 0) {
    try {
      return this->getObject(index, FT1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionID(size_t index = 0) {
    try {
      return this->getObject(index, FT1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Batch ID
   */

  ST* getFT1_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_3);
  }

  ST* getTransactionBatchID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_3);
  }

  bool isFT1_3(size_t index = 0) {
    try {
      return this->getObject(index, FT1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionBatchID(size_t index = 0) {
    try {
      return this->getObject(index, FT1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Date
   */

  DR* getFT1_4(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, FT1_4);
  }

  DR* getTransactionDate(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, FT1_4);
  }

  bool isFT1_4(size_t index = 0) {
    try {
      return this->getObject(index, FT1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionDate(size_t index = 0) {
    try {
      return this->getObject(index, FT1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Posting Date
   */

  DTM* getFT1_5(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, FT1_5);
  }

  DTM* getTransactionPostingDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, FT1_5);
  }

  bool isFT1_5(size_t index = 0) {
    try {
      return this->getObject(index, FT1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionPostingDate(size_t index = 0) {
    try {
      return this->getObject(index, FT1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Type
   */

  CWE* getFT1_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_6);
  }

  CWE* getTransactionType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_6);
  }

  bool isFT1_6(size_t index = 0) {
    try {
      return this->getObject(index, FT1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionType(size_t index = 0) {
    try {
      return this->getObject(index, FT1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Code
   */

  CWE* getFT1_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_7);
  }

  CWE* getTransactionCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_7);
  }

  bool isFT1_7(size_t index = 0) {
    try {
      return this->getObject(index, FT1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Description
   */

  ST* getFT1_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_8);
  }

  ST* getTransactionDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_8);
  }

  bool isFT1_8(size_t index = 0) {
    try {
      return this->getObject(index, FT1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionDescription(size_t index = 0) {
    try {
      return this->getObject(index, FT1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Description - Alt
   */

  ST* getFT1_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_9);
  }

  ST* getTransactionDescriptionAlt(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_9);
  }

  bool isFT1_9(size_t index = 0) {
    try {
      return this->getObject(index, FT1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionDescriptionAlt(size_t index = 0) {
    try {
      return this->getObject(index, FT1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Quantity
   */

  NM* getFT1_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, FT1_10);
  }

  NM* getTransactionQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, FT1_10);
  }

  bool isFT1_10(size_t index = 0) {
    try {
      return this->getObject(index, FT1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionQuantity(size_t index = 0) {
    try {
      return this->getObject(index, FT1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Amount - Extended
   */

  CP* getFT1_11(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, FT1_11);
  }

  CP* getTransactionAmountExtended(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, FT1_11);
  }

  bool isFT1_11(size_t index = 0) {
    try {
      return this->getObject(index, FT1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionAmountExtended(size_t index = 0) {
    try {
      return this->getObject(index, FT1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Amount - Unit
   */

  CP* getFT1_12(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, FT1_12);
  }

  CP* getTransactionAmountUnit(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, FT1_12);
  }

  bool isFT1_12(size_t index = 0) {
    try {
      return this->getObject(index, FT1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionAmountUnit(size_t index = 0) {
    try {
      return this->getObject(index, FT1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Department Code
   */

  CWE* getFT1_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_13);
  }

  CWE* getDepartmentCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_13);
  }

  bool isFT1_13(size_t index = 0) {
    try {
      return this->getObject(index, FT1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDepartmentCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Health Plan ID
   */

  CWE* getFT1_14(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_14);
  }

  CWE* getHealthPlanID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_14);
  }

  bool isFT1_14(size_t index = 0) {
    try {
      return this->getObject(index, FT1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHealthPlanID(size_t index = 0) {
    try {
      return this->getObject(index, FT1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Amount
   */

  CP* getFT1_15(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, FT1_15);
  }

  CP* getInsuranceAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, FT1_15);
  }

  bool isFT1_15(size_t index = 0) {
    try {
      return this->getObject(index, FT1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceAmount(size_t index = 0) {
    try {
      return this->getObject(index, FT1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigned Patient Location
   */

  PL* getFT1_16(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, FT1_16);
  }

  PL* getAssignedPatientLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, FT1_16);
  }

  bool isFT1_16(size_t index = 0) {
    try {
      return this->getObject(index, FT1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssignedPatientLocation(size_t index = 0) {
    try {
      return this->getObject(index, FT1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Fee Schedule
   */

  CWE* getFT1_17(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_17);
  }

  CWE* getFeeSchedule(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_17);
  }

  bool isFT1_17(size_t index = 0) {
    try {
      return this->getObject(index, FT1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFeeSchedule(size_t index = 0) {
    try {
      return this->getObject(index, FT1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Type
   */

  CWE* getFT1_18(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_18);
  }

  CWE* getPatientType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_18);
  }

  bool isFT1_18(size_t index = 0) {
    try {
      return this->getObject(index, FT1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientType(size_t index = 0) {
    try {
      return this->getObject(index, FT1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Code - FT1
   */

  CWE* getFT1_19(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_19);
  }

  CWE* getDiagnosisCodeFT1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_19);
  }

  bool isFT1_19(size_t index = 0) {
    try {
      return this->getObject(index, FT1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisCodeFT1(size_t index = 0) {
    try {
      return this->getObject(index, FT1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Performed By Code
   */

  XCN* getFT1_20(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, FT1_20);
  }

  XCN* getPerformedByCode(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, FT1_20);
  }

  bool isFT1_20(size_t index = 0) {
    try {
      return this->getObject(index, FT1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPerformedByCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordered By Code
   */

  XCN* getFT1_21(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, FT1_21);
  }

  XCN* getOrderedByCode(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, FT1_21);
  }

  bool isFT1_21(size_t index = 0) {
    try {
      return this->getObject(index, FT1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderedByCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Unit Cost
   */

  CP* getFT1_22(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, FT1_22);
  }

  CP* getUnitCost(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, FT1_22);
  }

  bool isFT1_22(size_t index = 0) {
    try {
      return this->getObject(index, FT1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnitCost(size_t index = 0) {
    try {
      return this->getObject(index, FT1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Order Number
   */

  EI* getFT1_23(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, FT1_23);
  }

  EI* getFillerOrderNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, FT1_23);
  }

  bool isFT1_23(size_t index = 0) {
    try {
      return this->getObject(index, FT1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, FT1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered By Code
   */

  XCN* getFT1_24(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, FT1_24);
  }

  XCN* getEnteredByCode(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, FT1_24);
  }

  bool isFT1_24(size_t index = 0) {
    try {
      return this->getObject(index, FT1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredByCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code
   */

  CNE* getFT1_25(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, FT1_25);
  }

  CNE* getProcedureCode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, FT1_25);
  }

  bool isFT1_25(size_t index = 0) {
    try {
      return this->getObject(index, FT1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code Modifier
   */

  CNE* getFT1_26(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, FT1_26);
  }

  CNE* getProcedureCodeModifier(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, FT1_26);
  }

  bool isFT1_26(size_t index = 0) {
    try {
      return this->getObject(index, FT1_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCodeModifier(size_t index = 0) {
    try {
      return this->getObject(index, FT1_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Advanced Beneficiary Notice Code
   */

  CWE* getFT1_27(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_27);
  }

  CWE* getAdvancedBeneficiaryNoticeCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_27);
  }

  bool isFT1_27(size_t index = 0) {
    try {
      return this->getObject(index, FT1_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdvancedBeneficiaryNoticeCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Medically Necessary Duplicate Procedure
   */

  CWE* getFT1_28(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_28);
  }

  CWE* getMedicallyNecessaryDuplicateProcedure(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_28);
  }

  bool isFT1_28(size_t index = 0) {
    try {
      return this->getObject(index, FT1_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMedicallyNecessaryDuplicateProcedure(size_t index = 0) {
    try {
      return this->getObject(index, FT1_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * NDC Code
   */

  CWE* getFT1_29(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_29);
  }

  CWE* getNDCCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_29);
  }

  bool isFT1_29(size_t index = 0) {
    try {
      return this->getObject(index, FT1_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNDCCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payment Reference ID
   */

  CX* getFT1_30(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, FT1_30);
  }

  CX* getPaymentReferenceID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, FT1_30);
  }

  bool isFT1_30(size_t index = 0) {
    try {
      return this->getObject(index, FT1_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPaymentReferenceID(size_t index = 0) {
    try {
      return this->getObject(index, FT1_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Reference Key
   */

  SI* getFT1_31(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, FT1_31);
  }

  SI* getTransactionReferenceKey(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, FT1_31);
  }

  bool isFT1_31(size_t index = 0) {
    try {
      return this->getObject(index, FT1_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionReferenceKey(size_t index = 0) {
    try {
      return this->getObject(index, FT1_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Performing Facility
   */

  XON* getFT1_32(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, FT1_32);
  }

  XON* getPerformingFacility(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, FT1_32);
  }

  bool isFT1_32(size_t index = 0) {
    try {
      return this->getObject(index, FT1_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPerformingFacility(size_t index = 0) {
    try {
      return this->getObject(index, FT1_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordering Facility
   */

  XON* getFT1_33(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, FT1_33);
  }

  XON* getOrderingFacility(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, FT1_33);
  }

  bool isFT1_33(size_t index = 0) {
    try {
      return this->getObject(index, FT1_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderingFacility(size_t index = 0) {
    try {
      return this->getObject(index, FT1_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Number
   */

  CWE* getFT1_34(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_34);
  }

  CWE* getItemNumber(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_34);
  }

  bool isFT1_34(size_t index = 0) {
    try {
      return this->getObject(index, FT1_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemNumber(size_t index = 0) {
    try {
      return this->getObject(index, FT1_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Model Number
   */

  ST* getFT1_35(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_35);
  }

  ST* getModelNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_35);
  }

  bool isFT1_35(size_t index = 0) {
    try {
      return this->getObject(index, FT1_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isModelNumber(size_t index = 0) {
    try {
      return this->getObject(index, FT1_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Processing Code
   */

  CWE* getFT1_36(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_36);
  }

  CWE* getSpecialProcessingCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_36);
  }

  bool isFT1_36(size_t index = 0) {
    try {
      return this->getObject(index, FT1_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialProcessingCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Clinic Code
   */

  CWE* getFT1_37(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_37);
  }

  CWE* getClinicCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_37);
  }

  bool isFT1_37(size_t index = 0) {
    try {
      return this->getObject(index, FT1_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isClinicCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Referral Number
   */

  CX* getFT1_38(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, FT1_38);
  }

  CX* getReferralNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, FT1_38);
  }

  bool isFT1_38(size_t index = 0) {
    try {
      return this->getObject(index, FT1_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferralNumber(size_t index = 0) {
    try {
      return this->getObject(index, FT1_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorization Number
   */

  CX* getFT1_39(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, FT1_39);
  }

  CX* getAuthorizationNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, FT1_39);
  }

  bool isFT1_39(size_t index = 0) {
    try {
      return this->getObject(index, FT1_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizationNumber(size_t index = 0) {
    try {
      return this->getObject(index, FT1_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Service Provider Taxonomy Code
   */

  CWE* getFT1_40(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_40);
  }

  CWE* getServiceProviderTaxonomyCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_40);
  }

  bool isFT1_40(size_t index = 0) {
    try {
      return this->getObject(index, FT1_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isServiceProviderTaxonomyCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Revenue Code
   */

  CWE* getFT1_41(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_41);
  }

  CWE* getRevenueCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_41);
  }

  bool isFT1_41(size_t index = 0) {
    try {
      return this->getObject(index, FT1_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRevenueCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prescription Number
   */

  ST* getFT1_42(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_42);
  }

  ST* getPrescriptionNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_42);
  }

  bool isFT1_42(size_t index = 0) {
    try {
      return this->getObject(index, FT1_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrescriptionNumber(size_t index = 0) {
    try {
      return this->getObject(index, FT1_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * NDC Qty and UOM
   */

  CQ* getFT1_43(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, FT1_43);
  }

  CQ* getNDCQtyandUOM(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, FT1_43);
  }

  bool isFT1_43(size_t index = 0) {
    try {
      return this->getObject(index, FT1_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNDCQtyandUOM(size_t index = 0) {
    try {
      return this->getObject(index, FT1_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DME Certificate of Medical Necessity
   */

  CWE* getFT1_44(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_44);
  }

  CWE* getDMECertificateofMedicalNecessity(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_44);
  }

  bool isFT1_44(size_t index = 0) {
    try {
      return this->getObject(index, FT1_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDMECertificateofMedicalNecessity(size_t index = 0) {
    try {
      return this->getObject(index, FT1_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DME Certification Type Code
   */

  CWE* getFT1_45(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_45);
  }

  CWE* getDMECertificationTypeCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_45);
  }

  bool isFT1_45(size_t index = 0) {
    try {
      return this->getObject(index, FT1_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDMECertificationTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DME Duration Value
   */

  NM* getFT1_46(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, FT1_46);
  }

  NM* getDMEDurationValue(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, FT1_46);
  }

  bool isFT1_46(size_t index = 0) {
    try {
      return this->getObject(index, FT1_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDMEDurationValue(size_t index = 0) {
    try {
      return this->getObject(index, FT1_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DME Certification Revision Date
   */

  DT* getFT1_47(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, FT1_47);
  }

  DT* getDMECertificationRevisionDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, FT1_47);
  }

  bool isFT1_47(size_t index = 0) {
    try {
      return this->getObject(index, FT1_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDMECertificationRevisionDate(size_t index = 0) {
    try {
      return this->getObject(index, FT1_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DME Initial Certification Date
   */

  DT* getFT1_48(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, FT1_48);
  }

  DT* getDMEInitialCertificationDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, FT1_48);
  }

  bool isFT1_48(size_t index = 0) {
    try {
      return this->getObject(index, FT1_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDMEInitialCertificationDate(size_t index = 0) {
    try {
      return this->getObject(index, FT1_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DME Last Certification Date
   */

  DT* getFT1_49(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, FT1_49);
  }

  DT* getDMELastCertificationDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, FT1_49);
  }

  bool isFT1_49(size_t index = 0) {
    try {
      return this->getObject(index, FT1_49) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDMELastCertificationDate(size_t index = 0) {
    try {
      return this->getObject(index, FT1_49) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DME Length of Medical Necessity Days
   */

  NM* getFT1_50(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, FT1_50);
  }

  NM* getDMELengthofMedicalNecessityDays(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, FT1_50);
  }

  bool isFT1_50(size_t index = 0) {
    try {
      return this->getObject(index, FT1_50) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDMELengthofMedicalNecessityDays(size_t index = 0) {
    try {
      return this->getObject(index, FT1_50) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DME Rental Price
   */

  MO* getFT1_51(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, FT1_51);
  }

  MO* getDMERentalPrice(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, FT1_51);
  }

  bool isFT1_51(size_t index = 0) {
    try {
      return this->getObject(index, FT1_51) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDMERentalPrice(size_t index = 0) {
    try {
      return this->getObject(index, FT1_51) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DME Purchase Price
   */

  MO* getFT1_52(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, FT1_52);
  }

  MO* getDMEPurchasePrice(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, FT1_52);
  }

  bool isFT1_52(size_t index = 0) {
    try {
      return this->getObject(index, FT1_52) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDMEPurchasePrice(size_t index = 0) {
    try {
      return this->getObject(index, FT1_52) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DME Frequency Code
   */

  CWE* getFT1_53(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_53);
  }

  CWE* getDMEFrequencyCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_53);
  }

  bool isFT1_53(size_t index = 0) {
    try {
      return this->getObject(index, FT1_53) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDMEFrequencyCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_53) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DME Certification Condition Indicator
   */

  ID* getFT1_54(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, FT1_54);
  }

  ID* getDMECertificationConditionIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, FT1_54);
  }

  bool isFT1_54(size_t index = 0) {
    try {
      return this->getObject(index, FT1_54) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDMECertificationConditionIndicator(size_t index = 0) {
    try {
      return this->getObject(index, FT1_54) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DME Condition Indicator Code
   */

  CWE* getFT1_55(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_55);
  }

  CWE* getDMEConditionIndicatorCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_55);
  }

  bool isFT1_55(size_t index = 0) {
    try {
      return this->getObject(index, FT1_55) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDMEConditionIndicatorCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_55) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Service Reason Code
   */

  CWE* getFT1_56(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_56);
  }

  CWE* getServiceReasonCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FT1_56);
  }

  bool isFT1_56(size_t index = 0) {
    try {
      return this->getObject(index, FT1_56) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isServiceReasonCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_56) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of FT1 */

} /* End of namespace HL7_29 */
#endif /* __FT1_v29_H__ */
