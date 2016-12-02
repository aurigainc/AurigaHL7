/*
 * This file is part of AurigaHL7.
 *
 * AurigaHL7 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AurigaHL7 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AurigaHL7.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __ESR_U02__24_H__
#define __ESR_U02__24_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/ROL.h"

namespace HL7_24 {

/* ESR_U02 */
struct ESR_U02 : public HL7Message {
  ESR_U02() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ESR_U02_MSH_1, ESR_U02_EQU_2, ESR_U02_ROL_4, FIELD_ID_MAX };

  const char* className() const { return "ESR_U02"; }
  ESR_U02* create() const { return new ESR_U02(); }

 private:
  /* Initialize object */
  void init() {
    setName("ESR_U02");
    addObject<MSH>(ESR_U02_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EQU>(ESR_U02_EQU_2, "EQU.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ROL>(ESR_U02_ROL_4, "ROL.4", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ESR_U02_MSH_1);
  }
  EQU* getEQU_2(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, ESR_U02_EQU_2);
  }
  ROL* getROL_4(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ESR_U02_ROL_4);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ESR_U02_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_2(size_t index = 0) {
    try {
      return this->getObject(index, ESR_U02_EQU_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_4(size_t index = 0) {
    try {
      return this->getObject(index, ESR_U02_ROL_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ESR_U02_ */
} /* namespace HL7_24 */
#endif /*  __ESR_U02__24_H__ */