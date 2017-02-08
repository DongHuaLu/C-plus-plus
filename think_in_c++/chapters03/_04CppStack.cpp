/*
 * _04Stack.cpp
 *
 *  Created on: 2015年7月18日
 *      Author: Administrator
 */

#include "_04CppStack.h"

#include "../require.h"
using namespace std;

void Stack::Link::init(void* data,Link* next){
	this->data = data;
	this->next = next;
}

void Stack::init(){
	head = 0;
}

Stack* Stack::push(void* data){
	Link* newLink = new Link;
	newLink->init(data,head);
	head = newLink;
	return this;
}

void* Stack::peek(){
	require(head != 0,"stack is empty");
	return head->data;
}

void* Stack::pop(){
	if(head == 0) return 0;
	void* retData = head->data;
	Link* oldHead = head;
	head = head->next;
	delete oldHead;
	return retData;
}

void Stack::cleanUp(){
	require(head ==0,"stack is not empty");
}
