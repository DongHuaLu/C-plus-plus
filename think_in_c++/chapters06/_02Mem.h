/*
 * _02Mem.h
 *
 *  Created on: 2015年7月21日
 *      Author: ludonghua
 */

#ifndef C_PLUS_PLUS_CHAPTERS04__02MEM_H_
#define C_PLUS_PLUS_CHAPTERS04__02MEM_H_
typedef unsigned char byte;
class Mem{
	byte* mem;
	int size;
	void ensureMinSize(int minSize);
public:
	Mem();
	Mem(int sz);
	~Mem();
	int msize();
	byte* pointer();
	byte* pointer(int minSize);
};
#endif /* C_PLUS_PLUS_CHAPTERS04__02MEM_H_ */
