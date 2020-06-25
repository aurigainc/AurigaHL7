/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:00:18 CEST 2020
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


#ifndef __RFI_v281_H__
#define __RFI_v281_H__

#include "../../common/Util.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"

namespace HL7_281 {

/* Request for Information */
class RFI : public HL7Segment {
 public:
  RFI() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RFI_1,
    RFI_2,
    RFI_3,
    RFI_4,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RFI"; }
  RFI* create() const { return new RFI(); }

 private:
  void init() {
    setName("RFI");
    /* Init members */
    addObject<DTM>(RFI_1, "RFI.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RFI_2, "RFI.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RFI_3, "RFI.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RFI_4, "RFI.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Request Date
   */

  DTM* getRFI_1(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RFI_1);
  }

  DTM* getRequestDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RFI_1);
  }

  bool isRFI_1(size_t index = 0) {
    try {
      return this->getObject(index, RFI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestDate(size_t index = 0) {
    try {
      return this->getObject(index, RFI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Response Due Date
   */

  DTM* getRFI_2(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RFI_2);
  }

  DTM* getResponseDueDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RFI_2);
  }

  bool isRFI_2(size_t index = 0) {
    try {
      return this->getObject(index, RFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResponseDueDate(size_t index = 0) {
    try {
      return this->getObject(index, RFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Consent
   */

  ID* getRFI_3(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RFI_3);
  }

  ID* getPatientConsent(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RFI_3);
  }

  bool isRFI_3(size_t index = 0) {
    try {
      return this->getObject(index, RFI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientConsent(size_t index = 0) {
    try {
      return this->getObject(index, RFI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date Additional Information Was Submitted
   */

  DTM* getRFI_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RFI_4);
  }

  DTM* getDateAdditionalInformationWasSubmitted(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RFI_4);
  }

  bool isRFI_4(size_t index = 0) {
    try {
      return this->getObject(index, RFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateAdditionalInformationWasSubmitted(size_t index = 0) {
    try {
      return this->getObject(index, RFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RFI */

} /* End of namespace HL7_281 */
#endif /* __RFI_v281_H__ */