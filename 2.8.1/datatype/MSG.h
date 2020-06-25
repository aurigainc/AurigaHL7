/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:58:48 CEST 2020
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


#ifndef __MSG_v281_H__
#define __MSG_v281_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"

namespace HL7_281 {

/* Message Type */
class MSG : public HL7Data {
 public:
  MSG() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    MSG_1, /* Message Code */
    MSG_2, /* Trigger Event */
    MSG_3, /* Message Structure */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "MSG"; }
  MSG *create() const { return new MSG(); }

 private:
  void init() {
    setName("MSG");
    /* Init members */
    addObject<ID>(MSG_1, "MSG.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(MSG_2, "MSG.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(MSG_3, "MSG.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Message Code
   */
  ID *getMSG_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MSG_1);
  }

  ID *getMessageCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MSG_1);
  }

  bool isMSG_1(size_t index = 0) {
    try {
      return this->getObject(index, MSG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageCode(size_t index = 0) {
    try {
      return this->getObject(index, MSG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Trigger Event
   */
  ID *getMSG_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MSG_2);
  }

  ID *getTriggerEvent(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MSG_2);
  }

  bool isMSG_2(size_t index = 0) {
    try {
      return this->getObject(index, MSG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTriggerEvent(size_t index = 0) {
    try {
      return this->getObject(index, MSG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Message Structure
   */
  ID *getMSG_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MSG_3);
  }

  ID *getMessageStructure(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MSG_3);
  }

  bool isMSG_3(size_t index = 0) {
    try {
      return this->getObject(index, MSG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageStructure(size_t index = 0) {
    try {
      return this->getObject(index, MSG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End MSG */

} /* End HL7_281 */

#endif /* __MSG_v281_H__ */