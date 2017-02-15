/*
 * usercallbacks.h
 *
 *  Created on: 15 lut 2017
 *      Author: wmichna
 */
#ifndef USERCALLBACKS_H_
#define USERCALLBACKS_H_

#include "stdint.h"

extern void sendWithMainUart(uint8_t* buffer, uint16_t length);

uint8_t usbinitialized;

#ifdef __cplusplus
	extern "C" {
#endif

		void usbRecieveCallback(uint8_t* buffer, uint32_t length);

#ifdef __cplusplus
	}
#endif

#endif /* USERCALLBACKS_H_ */
