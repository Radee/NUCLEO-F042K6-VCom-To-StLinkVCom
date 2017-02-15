/*
 * usercallbacks.c
 *
 *  Created on: 15 lut 2017
 *      Author: wmichna
 */
#include "usercallbacks.h"

uint8_t usbinitialized = 0;

void usbRecieveCallback(uint8_t* buffer, uint32_t length){
	sendWithMainUart(buffer,length);
}
