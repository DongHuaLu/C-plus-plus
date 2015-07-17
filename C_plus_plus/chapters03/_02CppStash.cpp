/*
 * _02CppStash.cpp
 *
 *  Created on: 2015年7月17日
 *      Author: Administrator
 */

#include "_02CppStash.h"

#include <iostream>
#include <cassert>
using namespace std;
// 空间不足时 每次增加的空间大小
const int increment = 100;

void CppStash::initialize(int size){
	this->size = size; // 初始化这个结构单个的大小
	next = 0;
	quantity = 0;
	storage = 0;
}
/***
 * 增加一个element到CStash中,返回这个element所在的索引
 */
int CppStash::add(const void* element){
	if(next >= quantity){
		// 如果下一个空位坐标 >=整个空间大小,填充100个新的空间
		CppStash::inflate(increment);
	}
	// 计算内存中下一个空闲的位置    下一个空闲的坐标*每个的大小
	int startByte = next * size;
	// 把element转换成 一个unsgned char*
	unsigned char* e = (unsigned char*) element;
	for(int i=0;i<size;i++){
		// 吧element按字节和下一个空闲的内存位置,存入到s的数组中
		storage[startByte +i] = e[i];
	}
	// 把空闲位置+1
	next++;
	// 返回这个element存在的位置
	return (next -1);
}
/***
 * 根据index 获取CStash[index]的元素
 */
void* CppStash::fetch(int index){
	assert(0<=index);
	if(index >= next){
		return 0;
	}
	return &(storage[index * size]);
}
/***
 * 返回CStash中元素的个数
 */
int CppStash::count(){
	return next;
}
/**
 * 当空间不足时,增加100个单位
 */
void CppStash::inflate(int increase){
	assert(increase >0);
	// 计算新的空间大小
	int newQuantity = quantity + increase;
	// 计算新的空间需要的内存大小   新的个数*每个的大小
	int newBytes = newQuantity * size;
	// 计算以前空间的大小
	int oldBytes = quantity * size;
	// 新建一个新的空间的char[]
	unsigned char* b = new unsigned char[newBytes];
	// 把就数据一个字节一个字节的靠背到新的数据中
	for(int i=0;i<oldBytes;i++){
		b[i] = storage[i];
	}
	// 删除旧的数据
	delete [](storage);
	// 把新的数据指针放入s
	storage = b;
	quantity = newQuantity;
}

void CppStash::cleanup(){
	if(storage!=0){
		cout << "fressing storage "<< endl;
		delete []storage;
	}
}


