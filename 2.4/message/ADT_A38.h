/*
 * This file is part of Auriga HL7 library.
 *
 * Auriga HL7 library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Auriga HL7 library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Auriga HL7 library.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __ADT_A38__24_H__
#define __ADT_A38__24_H__

#include "../../common/Util.h"
#include "../segment/DB1.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/OBX.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"

namespace HL7_24 {

/* ADT_A38 */
struct ADT_A38 : public HL7Message {
  ADT_A38() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A38_MSH_1,
    ADT_A38_EVN_2,
    ADT_A38_PID_3,
    ADT_A38_PD1_5,
    ADT_A38_PV1_7,
    ADT_A38_PV2_9,
    ADT_A38_DB1_13,
    ADT_A38_OBX_18,
    ADT_A38_DG1_23,
    ADT_A38_DRG_27,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A38"; }
  ADT_A38* create() const { return new ADT_A38(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A38");
    addObject<MSH>(ADT_A38_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(ADT_A38_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(ADT_A38_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(ADT_A38_PD1_5, "PD1.5", HL7::optional, HL7::repetition_off);
    addObject<PV1>(ADT_A38_PV1_7, "PV1.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(ADT_A38_PV2_9, "PV2.9", HL7::optional, HL7::repetition_off);
    addObject<DB1>(ADT_A38_DB1_13, "DB1.13", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ADT_A38_OBX_18, "OBX.18", HL7::optional, HL7::repetition_on);
    addObject<DG1>(ADT_A38_DG1_23, "DG1.23", HL7::optional, HL7::repetition_on);
    addObject<DRG>(ADT_A38_DRG_27, "DRG.27", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A38_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A38_EVN_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A38_PID_3);
  }
  PD1* getPD1_5(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A38_PD1_5);
  }
  PV1* getPV1_7(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A38_PV1_7);
  }
  PV2* getPV2_9(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ADT_A38_PV2_9);
  }
  DB1* getDB1_13(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, ADT_A38_DB1_13);
  }
  OBX* getOBX_18(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ADT_A38_OBX_18);
  }
  DG1* getDG1_23(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, ADT_A38_DG1_23);
  }
  DRG* getDRG_27(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, ADT_A38_DRG_27);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_7(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_PV1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_9(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_PV2_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_13(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_DB1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_18(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_OBX_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_23(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_DG1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_27(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_DRG_27) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A38_ */
} /* namespace HL7_24 */
#endif /*  __ADT_A38__24_H__ */
