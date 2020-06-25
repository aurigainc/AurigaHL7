/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:58:50 CEST 2020
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


#ifndef __PT_v281_H__
#define __PT_v281_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"

namespace HL7_281 {

/* Processing Type
Policy Type and Amount */
class PT : public HL7Data {
 public:
  PT() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PT_1, /* Processing ID */
    PT_2, /* Processing Mode */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PT"; }
  PT *create() const { return new PT(); }

 private:
  void init() {
    setName("PT");
    /* Init members */
    addObject<ID>(PT_1, "PT.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PT_2, "PT.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Processing ID
   */
  ID *getPT_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PT_1);
  }

  ID *getProcessingID(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PT_1);
  }

  bool isPT_1(size_t index = 0) {
    try {
      return this->getObject(index, PT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessingID(size_t index = 0) {
    try {
      return this->getObject(index, PT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Processing Mode
   */
  ID *getPT_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PT_2);
  }

  ID *getProcessingMode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PT_2);
  }

  bool isPT_2(size_t index = 0) {
    try {
      return this->getObject(index, PT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessingMode(size_t index = 0) {
    try {
      return this->getObject(index, PT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PT */

} /* End HL7_281 */

#endif /* __PT_v281_H__ */