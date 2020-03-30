    /*
 * processor.h
 *
 *  Created on: Dec 2, 2019
 *      Author: Muhammad.Elzeiny
 */

#ifndef TM4C123_FIRMWARE_UTILS_PROCESSOR_PROCESSOR_H_
#define TM4C123_FIRMWARE_UTILS_PROCESSOR_PROCESSOR_H_

#include "../Std_Types.h"

typedef uint8 PROCESSOR_ModeType;
#define PROCESSOR_ModePrivilege                 (uint8)1
#define PROCESSOR_ModeNonPrivilege              (uint8)0

extern void PROCESSOR_switchMode(PROCESSOR_ModeType Mode);

extern void PROCESSOR_enableGlobalInt(void);

extern void PROCESSOR_disableGlobalInt(void);

extern void PROCESSOR_SvcHandler(void);

#endif /* TM4C123_FIRMWARE_UTILS_PROCESSOR_PROCESSOR_H_ */
