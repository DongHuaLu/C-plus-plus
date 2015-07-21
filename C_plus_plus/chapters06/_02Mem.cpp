/*
 * _02Mem.cpp
 *
 *  Created on: 2015年7月21日
 *      Author: ludonghua
 */

#include "_02Mem.h"
#include <cstring>
using namespace std;

Mem::Mem(){
	mem=0;
	size = 0;
}

Mem::Mem(int sz){
	mem=0;
	size = 0;
	ensureMinSize(sz);
}

Mem::~Mem(){
	delete []mem;
}

void Mem::ensureMinSize(int minSize){
	if(size < minSize){
		byte* newmem = new byte[minSize];
		memset(newmem+size,0,minSize-size);
		memcpy(newmem,mem,size);
		delete []mem;
		mem = newmem;
		size = minSize;
	}
}

byte* Mem::pointer(){
	return mem;
}

byte* Mem::pointer(int minSize){
	ensureMinSize(minSize);
	return mem;
}
