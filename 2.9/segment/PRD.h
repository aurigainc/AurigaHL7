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


#ifndef __PRD_v29_H__
#define __PRD_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/PL.h"
#include "../datatype/PLN.h"
#include "../datatype/XAD.h"
#include "../datatype/XON.h"
#include "../datatype/XPN.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* PRD */
class PRD : public HL7Segment {
 public:
  PRD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PRD_1,
    PRD_2,
    PRD_3,
    PRD_4,
    PRD_5,
    PRD_6,
    PRD_7,
    PRD_8,
    PRD_9,
    PRD_10,
    PRD_11,
    PRD_12,
    PRD_13,
    PRD_14,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PRD"; }
  PRD* create() const { return new PRD(); }

 private:
  void init() {
    setName("PRD");
    /* Init members */
    addObject<CWE>(PRD_1, "PRD.1", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(PRD_2, "PRD.2", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(PRD_3, "PRD.3", HL7::initialized, HL7::repetition_off);
    addObject<PL>(PRD_4, "PRD.4", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(PRD_5, "PRD.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRD_6, "PRD.6", HL7::initialized, HL7::repetition_off);
    addObject<PLN>(PRD_7, "PRD.7", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PRD_8, "PRD.8", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PRD_9, "PRD.9", HL7::initialized, HL7::repetition_off);
    addObject<XON>(PRD_10, "PRD.10", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(PRD_11, "PRD.11", HL7::initialized, HL7::repetition_off);
    addObject<PL>(PRD_12, "PRD.12", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(PRD_13, "PRD.13", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRD_14, "PRD.14", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Provider Role
   */

  CWE* getPRD_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRD_1);
  }

  CWE* getProviderRole(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRD_1);
  }

  bool isPRD_1(size_t index = 0) {
    try {
      return this->getObject(index, PRD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderRole(size_t index = 0) {
    try {
      return this->getObject(index, PRD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Name
   */

  XPN* getPRD_2(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, PRD_2);
  }

  XPN* getProviderName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, PRD_2);
  }

  bool isPRD_2(size_t index = 0) {
    try {
      return this->getObject(index, PRD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderName(size_t index = 0) {
    try {
      return this->getObject(index, PRD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Address
   */

  XAD* getPRD_3(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PRD_3);
  }

  XAD* getProviderAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PRD_3);
  }

  bool isPRD_3(size_t index = 0) {
    try {
      return this->getObject(index, PRD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderAddress(size_t index = 0) {
    try {
      return this->getObject(index, PRD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Location
   */

  PL* getPRD_4(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PRD_4);
  }

  PL* getProviderLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PRD_4);
  }

  bool isPRD_4(size_t index = 0) {
    try {
      return this->getObject(index, PRD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderLocation(size_t index = 0) {
    try {
      return this->getObject(index, PRD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Communication Information
   */

  XTN* getPRD_5(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PRD_5);
  }

  XTN* getProviderCommunicationInformation(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PRD_5);
  }

  bool isPRD_5(size_t index = 0) {
    try {
      return this->getObject(index, PRD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderCommunicationInformation(size_t index = 0) {
    try {
      return this->getObject(index, PRD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preferred Method of Contact
   */

  CWE* getPRD_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRD_6);
  }

  CWE* getPreferredMethodofContact(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRD_6);
  }

  bool isPRD_6(size_t index = 0) {
    try {
      return this->getObject(index, PRD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferredMethodofContact(size_t index = 0) {
    try {
      return this->getObject(index, PRD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Identifiers
   */

  PLN* getPRD_7(size_t index = 0) {
    return (PLN*)this->getObjectSafe(index, PRD_7);
  }

  PLN* getProviderIdentifiers(size_t index = 0) {
    return (PLN*)this->getObjectSafe(index, PRD_7);
  }

  bool isPRD_7(size_t index = 0) {
    try {
      return this->getObject(index, PRD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderIdentifiers(size_t index = 0) {
    try {
      return this->getObject(index, PRD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Start Date of Provider Role
   */

  DTM* getPRD_8(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRD_8);
  }

  DTM* getEffectiveStartDateofProviderRole(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRD_8);
  }

  bool isPRD_8(size_t index = 0) {
    try {
      return this->getObject(index, PRD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveStartDateofProviderRole(size_t index = 0) {
    try {
      return this->getObject(index, PRD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective End Date of Provider Role
   */

  DTM* getPRD_9(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRD_9);
  }

  DTM* getEffectiveEndDateofProviderRole(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRD_9);
  }

  bool isPRD_9(size_t index = 0) {
    try {
      return this->getObject(index, PRD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveEndDateofProviderRole(size_t index = 0) {
    try {
      return this->getObject(index, PRD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Organization Name and Identifier
   */

  XON* getPRD_10(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PRD_10);
  }

  XON* getProviderOrganizationNameandIdentifier(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PRD_10);
  }

  bool isPRD_10(size_t index = 0) {
    try {
      return this->getObject(index, PRD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderOrganizationNameandIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PRD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Organization Address
   */

  XAD* getPRD_11(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PRD_11);
  }

  XAD* getProviderOrganizationAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PRD_11);
  }

  bool isPRD_11(size_t index = 0) {
    try {
      return this->getObject(index, PRD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderOrganizationAddress(size_t index = 0) {
    try {
      return this->getObject(index, PRD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Organization Location Information
   */

  PL* getPRD_12(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PRD_12);
  }

  PL* getProviderOrganizationLocationInformation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PRD_12);
  }

  bool isPRD_12(size_t index = 0) {
    try {
      return this->getObject(index, PRD_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderOrganizationLocationInformation(size_t index = 0) {
    try {
      return this->getObject(index, PRD_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Organization Communication
   */

  XTN* getPRD_13(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PRD_13);
  }

  XTN* getProviderOrganizationCommunication(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PRD_13);
  }

  bool isPRD_13(size_t index = 0) {
    try {
      return this->getObject(index, PRD_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderOrganizationCommunication(size_t index = 0) {
    try {
      return this->getObject(index, PRD_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Organization Method of Contact
   */

  CWE* getPRD_14(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRD_14);
  }

  CWE* getProviderOrganizationMethodofContact(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRD_14);
  }

  bool isPRD_14(size_t index = 0) {
    try {
      return this->getObject(index, PRD_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderOrganizationMethodofContact(size_t index = 0) {
    try {
      return this->getObject(index, PRD_14) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PRD */

} /* End of namespace HL7_29 */
#endif /* __PRD_v29_H__ */
