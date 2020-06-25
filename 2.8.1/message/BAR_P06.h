/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:01:04 CEST 2020
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


#ifndef __BAR_P06__281_H__
#define __BAR_P06__281_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct BAR_P06_PATIENT; /* PATIENT */

/* PATIENT */
struct BAR_P06_PATIENT : public HL7Group {
  BAR_P06_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BAR_P06_PID_1,
    BAR_P06_PV1_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "BAR_P06_PATIENT"; }
  BAR_P06_PATIENT* create() const { return new BAR_P06_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("BAR_P06.PATIENT");
    addObject<PID>(BAR_P06_PID_1, "PID.1", HL7::optional, HL7::repetition_on);
    addObject<PV1>(BAR_P06_PV1_2, "PV1.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_1(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, BAR_P06_PID_1);
  }
  PV1* getPV1_2(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, BAR_P06_PV1_2);
  }

  /* Checker list */
  bool isPID_1(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P06_PID_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_2(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P06_PV1_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BAR_P06_PATIENT */

/* BAR_P06 */
struct BAR_P06 : public HL7Message {
  BAR_P06() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BAR_P06_MSH_1,
    BAR_P06_SFT_2,
    BAR_P06_UAC_3,
    BAR_P06_EVN_4,
    BAR_P06_PID_6,
    BAR_P06_PV1_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "BAR_P06"; }
  BAR_P06* create() const { return new BAR_P06(); }

 private:
  /* Initialize object */
  void init() {
    setName("BAR_P06");
    addObject<MSH>(BAR_P06_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(BAR_P06_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(BAR_P06_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(BAR_P06_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<PID>(BAR_P06_PID_6, "PID.6", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(BAR_P06_PV1_7, "PV1.7", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, BAR_P06_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, BAR_P06_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, BAR_P06_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, BAR_P06_EVN_4);
  }
  PID* getPID_6(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, BAR_P06_PID_6);
  }
  PV1* getPV1_7(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, BAR_P06_PV1_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P06_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P06_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P06_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P06_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P06_PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_7(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P06_PV1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BAR_P06_ */
} /* namespace HL7_281 */
#endif /*  __BAR_P06__281_H__ */