/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:01:14 CEST 2020
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


#ifndef __CCF_I22__281_H__
#define __CCF_I22__281_H__

#include "../../common/Util.h"
#include "../segment/MSH.h"
#include "../segment/PID.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* CCF_I22 */
struct CCF_I22 : public HL7Message {
  CCF_I22() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    CCF_I22_MSH_1,
    CCF_I22_SFT_2,
    CCF_I22_UAC_3,
    CCF_I22_PID_4,
    FIELD_ID_MAX
  };

  const char* className() const { return "CCF_I22"; }
  CCF_I22* create() const { return new CCF_I22(); }

 private:
  /* Initialize object */
  void init() {
    setName("CCF_I22");
    addObject<MSH>(CCF_I22_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(CCF_I22_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(CCF_I22_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<PID>(CCF_I22_PID_4, "PID.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, CCF_I22_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, CCF_I22_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, CCF_I22_UAC_3);
  }
  PID* getPID_4(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, CCF_I22_PID_4);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, CCF_I22_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, CCF_I22_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, CCF_I22_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_4(size_t index = 0) {
    try {
      return this->getObject(index, CCF_I22_PID_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* CCF_I22_ */
} /* namespace HL7_281 */
#endif /*  __CCF_I22__281_H__ */