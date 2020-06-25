/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:00:33 CEST 2020
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


#ifndef __SCP_v281_H__
#define __SCP_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/EI.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_281 {

/* Sterilizer Configuration (Anti-Microbial Devices */
class SCP : public HL7Segment {
 public:
  SCP() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    SCP_1,
    SCP_2,
    SCP_3,
    SCP_4,
    SCP_5,
    SCP_6,
    SCP_7,
    SCP_8,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "SCP"; }
  SCP* create() const { return new SCP(); }

 private:
  void init() {
    setName("SCP");
    /* Init members */
    addObject<NM>(SCP_1, "SCP.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SCP_2, "SCP.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SCP_3, "SCP.3", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SCP_4, "SCP.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SCP_5, "SCP.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SCP_6, "SCP.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SCP_7, "SCP.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SCP_8, "SCP.8", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Number Of Decontamination/Sterilization Devices
   */

  NM* getSCP_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SCP_1);
  }

  NM* getNumberOfDecontaminationSterilizationDevices(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SCP_1);
  }

  bool isSCP_1(size_t index = 0) {
    try {
      return this->getObject(index, SCP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberOfDecontaminationSterilizationDevices(size_t index = 0) {
    try {
      return this->getObject(index, SCP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Labor Calculation Type
   */

  CWE* getSCP_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCP_2);
  }

  CWE* getLaborCalculationType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCP_2);
  }

  bool isSCP_2(size_t index = 0) {
    try {
      return this->getObject(index, SCP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLaborCalculationType(size_t index = 0) {
    try {
      return this->getObject(index, SCP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date Format
   */

  CWE* getSCP_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCP_3);
  }

  CWE* getDateFormat(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCP_3);
  }

  bool isSCP_3(size_t index = 0) {
    try {
      return this->getObject(index, SCP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateFormat(size_t index = 0) {
    try {
      return this->getObject(index, SCP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Number
   */

  EI* getSCP_4(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SCP_4);
  }

  EI* getDeviceNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SCP_4);
  }

  bool isSCP_4(size_t index = 0) {
    try {
      return this->getObject(index, SCP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceNumber(size_t index = 0) {
    try {
      return this->getObject(index, SCP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Name
   */

  ST* getSCP_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SCP_5);
  }

  ST* getDeviceName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SCP_5);
  }

  bool isSCP_5(size_t index = 0) {
    try {
      return this->getObject(index, SCP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceName(size_t index = 0) {
    try {
      return this->getObject(index, SCP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Model Name
   */

  ST* getSCP_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SCP_6);
  }

  ST* getDeviceModelName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SCP_6);
  }

  bool isSCP_6(size_t index = 0) {
    try {
      return this->getObject(index, SCP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceModelName(size_t index = 0) {
    try {
      return this->getObject(index, SCP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Type
   */

  CWE* getSCP_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCP_7);
  }

  CWE* getDeviceType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCP_7);
  }

  bool isSCP_7(size_t index = 0) {
    try {
      return this->getObject(index, SCP_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceType(size_t index = 0) {
    try {
      return this->getObject(index, SCP_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Lot Control
   */

  CWE* getSCP_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCP_8);
  }

  CWE* getLotControl(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCP_8);
  }

  bool isSCP_8(size_t index = 0) {
    try {
      return this->getObject(index, SCP_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLotControl(size_t index = 0) {
    try {
      return this->getObject(index, SCP_8) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of SCP */

} /* End of namespace HL7_281 */
#endif /* __SCP_v281_H__ */