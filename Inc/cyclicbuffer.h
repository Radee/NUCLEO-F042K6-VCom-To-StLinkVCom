/*
 * cyclicbuffer.h
 *
 *  Created on: Feb 15, 2017
 *      Author: Wojciech
 */

#ifndef CYCLICBUFFER_H_
#define CYCLICBUFFER_H_

#include "stdint.h"

#define CYCLIC_LEN 32

#ifdef __cplusplus
	extern "C" {
#endif

	unsigned char detectChange(void);
	void readCyclic(char* in,int* lenIn);
	void writeChar(char c);
	void writeString(char* str,int n);


#ifdef __cplusplus
	}
#endif

#endif /* CYCLICBUFFER_H_ */
