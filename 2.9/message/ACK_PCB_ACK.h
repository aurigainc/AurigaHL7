/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Wed  5 Aug 17:48:42 CEST 2020
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jun 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 *
 * This file was developed as part of the ongoing activities related
 * to the design, implementation and execution of interoperability tests
 * between hacca-based versus Auriga HL7-based applications.
 *
 * In more details I decided to extend Auriga HL7 C++ Library with header files
 * implementing HL7 structures of the version 2.8.1 of the protocol (April 2014)
 * because the version 2.4 distributed with Auriga HL7 is a bit outdated (October 2000).
 *
 * All files in this fork were automatically generated by [hawk], an hacca-based tool
 * and strictly follow the syntax and convention originally defined
 * by Auriga HL7 C++ Library just as form of continuity, convenience
 * and respect for their superb work.
 */


#ifndef __ACK_PCB_ACK__29_H__
#define __ACK_PCB_ACK__29_H__

#include "../../common/Util.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct ACK_PCB_ACK : public HL7Message {
  ACK_PCB_ACK() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ACK_PCB_ACK_MSH_1,
    ACK_PCB_ACK_SFT_2,
    ACK_PCB_ACK_UAC_3,
    ACK_PCB_ACK_MSA_4,
    ACK_PCB_ACK_ERR_5,
    FIELD_ID_MAX
  };

  const char* className() const { return "ACK_PCB_ACK"; }
  ACK_PCB_ACK* create() const { return new ACK_PCB_ACK(); }

 private:
  /* Initialize object */
  void init() {
    setName("ACK_PCB_ACK");
    addObject<MSH>(ACK_PCB_ACK_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(ACK_PCB_ACK_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ACK_PCB_ACK_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(ACK_PCB_ACK_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(ACK_PCB_ACK_ERR_5, "ERR.5", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ACK_PCB_ACK_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ACK_PCB_ACK_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ACK_PCB_ACK_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ACK_PCB_ACK_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ACK_PCB_ACK_ERR_5);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ACK_PCB_ACK_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, ACK_PCB_ACK_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, ACK_PCB_ACK_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, ACK_PCB_ACK_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, ACK_PCB_ACK_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ACK_PCB_ACK_ */
} /* namespace HL7_29 */
#endif /*  __ACK_PCB_ACK__29_H__ */
