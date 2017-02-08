/*
 * CppStash.h
 *
 *  Created on: 2015年7月17日
 *      Author: Administrator
 */

struct CppStash{
	int size; // 单个的大小
	int quantity; // 存储空间的大小
	int next; // 下一个空存储空间
	unsigned char* storage; // 动态char数组的头
	void initialize(int size);
	void cleanup();
	int add(const void* element);
	void* fetch(int index);
	int count();
	void inflate(int increase);
};



