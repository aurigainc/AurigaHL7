/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:06:47 CEST 2020
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jun 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 *
 * This file was developed as part of the ongoing activities related
 * to the design, implementation and execution of interoperability tests
 * between hacca-based versus AurigaHL7-based applications.
 *
 * In more details I decided to extend AurigaHL7 C++ Library with header files
 * implementing HL7 structures of the version 2.8.1 of the protocol (April 2014)
 * because the version 2.4 distributed with AurigaHL7 is a bit outdated (October 2000).
 *
 * All files in this fork was automatically generated by hacca-based tool [hawk]
 * and strictly follow the syntax and convention originally defined
 * by Auriga HL7 C++ Library just as form of continuity, convenience
 * and respect for their superb work.
 */


#ifndef __RRI_I12__281_H__
#define __RRI_I12__281_H__

#include "../../common/Util.h"
#include "../segment/ACC.h"
#include "../segment/AL1.h"
#include "../segment/AUT.h"
#include "../segment/CTD.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/PID.h"
#include "../segment/PR1.h"
#include "../segment/PRD.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RF1.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct RRI_I12_AUTHORIZATION_CONTACT2; /* AUTHORIZATION_CONTACT2 */
struct RRI_I12_PROVIDER_CONTACT; /* PROVIDER_CONTACT */
struct RRI_I12_PROCEDURE; /* PROCEDURE */
struct RRI_I12_OBSERVATION; /* OBSERVATION */
struct RRI_I12_PATIENT_VISIT; /* PATIENT_VISIT */
struct RRI_I12_RESULTS_NOTES; /* RESULTS_NOTES */
struct RRI_I12_AUTHORIZATION_CONTACT2; /* AUTHORIZATION_CONTACT2 */

/* AUTHORIZATION_CONTACT2 */
struct RRI_I12_AUTHORIZATION_CONTACT2 : public HL7Group {
  RRI_I12_AUTHORIZATION_CONTACT2() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRI_I12_AUT_1,
    RRI_I12_CTD_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRI_I12_AUTHORIZATION_CONTACT2"; }
  RRI_I12_AUTHORIZATION_CONTACT2* create() const { return new RRI_I12_AUTHORIZATION_CONTACT2(); }

 private:
  /* Initialize object */
  void init() {
    setName("RRI_I12.AUTHORIZATION_CONTACT2");
    addObject<AUT>(RRI_I12_AUT_1, "AUT.1", HL7::optional, HL7::repetition_on);
    addObject<CTD>(RRI_I12_CTD_2, "CTD.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  AUT* getAUT_1(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, RRI_I12_AUT_1);
  }
  CTD* getCTD_2(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RRI_I12_CTD_2);
  }

  /* Checker list */
  bool isAUT_1(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_AUT_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_2(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_CTD_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRI_I12_AUTHORIZATION_CONTACT2 */

/* PROVIDER_CONTACT */
struct RRI_I12_PROVIDER_CONTACT : public HL7Group {
  RRI_I12_PROVIDER_CONTACT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRI_I12_CTD_1,
    RRI_I12_PRD_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRI_I12_PROVIDER_CONTACT"; }
  RRI_I12_PROVIDER_CONTACT* create() const { return new RRI_I12_PROVIDER_CONTACT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RRI_I12.PROVIDER_CONTACT");
    addObject<CTD>(RRI_I12_CTD_1, "CTD.1", HL7::optional, HL7::repetition_on);
    addObject<PRD>(RRI_I12_PRD_2, "PRD.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  CTD* getCTD_1(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RRI_I12_CTD_1);
  }
  PRD* getPRD_2(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RRI_I12_PRD_2);
  }

  /* Checker list */
  bool isCTD_1(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_CTD_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_2(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PRD_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRI_I12_PROVIDER_CONTACT */

/* PROCEDURE */
struct RRI_I12_PROCEDURE : public HL7Group {
  RRI_I12_PROCEDURE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRI_I12_PR1_1,
    RRI_I12_RRI_I12_AUTHORIZATION_CONTACT2_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRI_I12_PROCEDURE"; }
  RRI_I12_PROCEDURE* create() const { return new RRI_I12_PROCEDURE(); }

 private:
  /* Initialize object */
  void init() {
    setName("RRI_I12.PROCEDURE");
    addObject<PR1>(RRI_I12_PR1_1, "PR1.1", HL7::optional, HL7::repetition_on);
    addObject<RRI_I12_AUTHORIZATION_CONTACT2>(RRI_I12_RRI_I12_AUTHORIZATION_CONTACT2_2, "RRI_I12_AUTHORIZATION_CONTACT2.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PR1* getPR1_1(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, RRI_I12_PR1_1);
  }
  RRI_I12_AUTHORIZATION_CONTACT2* getRRI_I12_AUTHORIZATION_CONTACT2_2(size_t index = 0) {
    return (RRI_I12_AUTHORIZATION_CONTACT2*)this->getObjectSafe(index, RRI_I12_RRI_I12_AUTHORIZATION_CONTACT2_2);
  }

  /* Checker list */
  bool isPR1_1(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PR1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRRI_I12_AUTHORIZATION_CONTACT2_2(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_RRI_I12_AUTHORIZATION_CONTACT2_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRI_I12_PROCEDURE */

/* OBSERVATION */
struct RRI_I12_OBSERVATION : public HL7Group {
  RRI_I12_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRI_I12_NTE_1,
    RRI_I12_OBR_2,
    RRI_I12_RRI_I12_RESULTS_NOTES_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRI_I12_OBSERVATION"; }
  RRI_I12_OBSERVATION* create() const { return new RRI_I12_OBSERVATION(); }

 private:
  /* Initialize object */
  void init() {
    setName("RRI_I12.OBSERVATION");
    addObject<NTE>(RRI_I12_NTE_1, "NTE.1", HL7::optional, HL7::repetition_on);
    addObject<OBR>(RRI_I12_OBR_2, "OBR.2", HL7::optional, HL7::repetition_on);
    addObject<RRI_I12_RESULTS_NOTES>(RRI_I12_RRI_I12_RESULTS_NOTES_3, "RRI_I12_RESULTS_NOTES.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NTE* getNTE_1(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RRI_I12_NTE_1);
  }
  OBR* getOBR_2(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, RRI_I12_OBR_2);
  }
  RRI_I12_RESULTS_NOTES* getRRI_I12_RESULTS_NOTES_3(size_t index = 0) {
    return (RRI_I12_RESULTS_NOTES*)this->getObjectSafe(index, RRI_I12_RRI_I12_RESULTS_NOTES_3);
  }

  /* Checker list */
  bool isNTE_1(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_2(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_OBR_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRRI_I12_RESULTS_NOTES_3(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_RRI_I12_RESULTS_NOTES_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRI_I12_OBSERVATION */

/* PATIENT_VISIT */
struct RRI_I12_PATIENT_VISIT : public HL7Group {
  RRI_I12_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRI_I12_PV1_1,
    RRI_I12_PV2_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRI_I12_PATIENT_VISIT"; }
  RRI_I12_PATIENT_VISIT* create() const { return new RRI_I12_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RRI_I12.PATIENT_VISIT");
    addObject<PV1>(RRI_I12_PV1_1, "PV1.1", HL7::optional, HL7::repetition_on);
    addObject<PV2>(RRI_I12_PV2_2, "PV2.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PV1* getPV1_1(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RRI_I12_PV1_1);
  }
  PV2* getPV2_2(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RRI_I12_PV2_2);
  }

  /* Checker list */
  bool isPV1_1(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PV1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_2(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PV2_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRI_I12_PATIENT_VISIT */

/* RESULTS_NOTES */
struct RRI_I12_RESULTS_NOTES : public HL7Group {
  RRI_I12_RESULTS_NOTES() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRI_I12_NTE_1,
    RRI_I12_OBX_2,
    RRI_I12_PRT_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRI_I12_RESULTS_NOTES"; }
  RRI_I12_RESULTS_NOTES* create() const { return new RRI_I12_RESULTS_NOTES(); }

 private:
  /* Initialize object */
  void init() {
    setName("RRI_I12.RESULTS_NOTES");
    addObject<NTE>(RRI_I12_NTE_1, "NTE.1", HL7::optional, HL7::repetition_on);
    addObject<OBX>(RRI_I12_OBX_2, "OBX.2", HL7::optional, HL7::repetition_on);
    addObject<PRT>(RRI_I12_PRT_3, "PRT.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NTE* getNTE_1(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RRI_I12_NTE_1);
  }
  OBX* getOBX_2(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RRI_I12_OBX_2);
  }
  PRT* getPRT_3(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, RRI_I12_PRT_3);
  }

  /* Checker list */
  bool isNTE_1(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_2(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_OBX_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_3(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PRT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRI_I12_RESULTS_NOTES */

/* RRI_I12 */
struct RRI_I12 : public HL7Message {
  RRI_I12() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRI_I12_MSH_1,
    RRI_I12_SFT_2,
    RRI_I12_UAC_3,
    RRI_I12_MSA_4,
    RRI_I12_RF1_5,
    RRI_I12_PID_8,
    RRI_I12_ACC_9,
    RRI_I12_DG1_10,
    RRI_I12_DRG_11,
    RRI_I12_AL1_12,
    RRI_I12_NTE_16,
    RRI_I12_AUT_17,
    RRI_I12_CTD_18,
    RRI_I12_OBR_19,
    RRI_I12_NTE_20,
    RRI_I12_OBX_22,
    RRI_I12_PRT_23,
    RRI_I12_NTE_24,
    RRI_I12_PV1_25,
    RRI_I12_PV2_26,
    RRI_I12_PR1_27,
    RRI_I12_AUT_29,
    RRI_I12_CTD_30,
    RRI_I12_PRD_31,
    RRI_I12_CTD_32,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRI_I12"; }
  RRI_I12* create() const { return new RRI_I12(); }

 private:
  /* Initialize object */
  void init() {
    setName("RRI_I12");
    addObject<MSH>(RRI_I12_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RRI_I12_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RRI_I12_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RRI_I12_MSA_4, "MSA.4", HL7::optional, HL7::repetition_off);
    addObject<RF1>(RRI_I12_RF1_5, "RF1.5", HL7::optional, HL7::repetition_off);
    addObject<PID>(RRI_I12_PID_8, "PID.8", HL7::initialized, HL7::repetition_off);
    addObject<ACC>(RRI_I12_ACC_9, "ACC.9", HL7::optional, HL7::repetition_off);
    addObject<DG1>(RRI_I12_DG1_10, "DG1.10", HL7::optional, HL7::repetition_on);
    addObject<DRG>(RRI_I12_DRG_11, "DRG.11", HL7::optional, HL7::repetition_on);
    addObject<AL1>(RRI_I12_AL1_12, "AL1.12", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RRI_I12_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
    addObject<AUT>(RRI_I12_AUT_17, "AUT.17", HL7::initialized, HL7::repetition_off);
    addObject<CTD>(RRI_I12_CTD_18, "CTD.18", HL7::optional, HL7::repetition_off);
    addObject<OBR>(RRI_I12_OBR_19, "OBR.19", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(RRI_I12_NTE_20, "NTE.20", HL7::optional, HL7::repetition_off);
    addObject<OBX>(RRI_I12_OBX_22, "OBX.22", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(RRI_I12_PRT_23, "PRT.23", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RRI_I12_NTE_24, "NTE.24", HL7::optional, HL7::repetition_off);
    addObject<PV1>(RRI_I12_PV1_25, "PV1.25", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RRI_I12_PV2_26, "PV2.26", HL7::optional, HL7::repetition_off);
    addObject<PR1>(RRI_I12_PR1_27, "PR1.27", HL7::initialized, HL7::repetition_off);
    addObject<AUT>(RRI_I12_AUT_29, "AUT.29", HL7::initialized, HL7::repetition_off);
    addObject<CTD>(RRI_I12_CTD_30, "CTD.30", HL7::optional, HL7::repetition_off);
    addObject<PRD>(RRI_I12_PRD_31, "PRD.31", HL7::initialized, HL7::repetition_off);
    addObject<CTD>(RRI_I12_CTD_32, "CTD.32", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RRI_I12_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RRI_I12_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RRI_I12_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RRI_I12_MSA_4);
  }
  RF1* getRF1_5(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, RRI_I12_RF1_5);
  }
  PID* getPID_8(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RRI_I12_PID_8);
  }
  ACC* getACC_9(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, RRI_I12_ACC_9);
  }
  DG1* getDG1_10(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, RRI_I12_DG1_10);
  }
  DRG* getDRG_11(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, RRI_I12_DRG_11);
  }
  AL1* getAL1_12(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, RRI_I12_AL1_12);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RRI_I12_NTE_16);
  }
  AUT* getAUT_17(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, RRI_I12_AUT_17);
  }
  CTD* getCTD_18(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RRI_I12_CTD_18);
  }
  OBR* getOBR_19(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, RRI_I12_OBR_19);
  }
  NTE* getNTE_20(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RRI_I12_NTE_20);
  }
  OBX* getOBX_22(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RRI_I12_OBX_22);
  }
  PRT* getPRT_23(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, RRI_I12_PRT_23);
  }
  NTE* getNTE_24(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RRI_I12_NTE_24);
  }
  PV1* getPV1_25(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RRI_I12_PV1_25);
  }
  PV2* getPV2_26(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RRI_I12_PV2_26);
  }
  PR1* getPR1_27(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, RRI_I12_PR1_27);
  }
  AUT* getAUT_29(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, RRI_I12_AUT_29);
  }
  CTD* getCTD_30(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RRI_I12_CTD_30);
  }
  PRD* getPRD_31(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RRI_I12_PRD_31);
  }
  CTD* getCTD_32(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RRI_I12_CTD_32);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_5(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_RF1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_8(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_9(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_ACC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_10(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_DG1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_11(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_DRG_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_12(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_AL1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUT_17(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_AUT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_18(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_CTD_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_19(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_OBR_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_20(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_NTE_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_22(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_OBX_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_23(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PRT_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_24(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_NTE_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_25(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PV1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_26(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PV2_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_27(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PR1_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUT_29(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_AUT_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_30(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_CTD_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_31(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PRD_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_32(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_CTD_32) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRI_I12_ */
} /* namespace HL7_281 */
#endif /*  __RRI_I12__281_H__ */