/*
 * cyclicbuffer.c
 *
 *  Created on: Feb 15, 2017
 *      Author: Wojciech
 */
#include "cyclicbuffer.h"

char cyclicBuffer[CYCLIC_LEN];
int r = 0;
int w = 0;

void readCyclic(char* in,int* lenIn){
	char tempBuffer[CYCLIC_LEN+1];
	memset(tempBuffer,0x00,CYCLIC_LEN+1);
	if(r<w){
		memcpy(tempBuffer,cyclicBuffer+(r+1),(w-r) );
	}else if(r>=w){
		int i = 0;
		if(r+1<CYCLIC_LEN){
			memcpy(tempBuffer,cyclicBuffer+(r+1),(CYCLIC_LEN-1)-r);
			i+=(CYCLIC_LEN-1)-r;
		}
		memcpy(tempBuffer+i,cyclicBuffer,w+1);

	}
		memcpy(in,tempBuffer,strlen(tempBuffer));
		*lenIn=strlen(tempBuffer);
		r=w;
}

void writeChar(char c){
	if(w+1>=CYCLIC_LEN){
		w=0;
	}else{
		w++;
	}
		cyclicBuffer[w]=c;
}

void writeString(char* str,int n){
	for(int i =0 ; i<n;i++){
		writeChar(str[i]);
	}
}

unsigned char detectChange(){
	return w!=r;
}
