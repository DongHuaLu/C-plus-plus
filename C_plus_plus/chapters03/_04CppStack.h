/*
 * _04CppStack.h
 *
 *  Created on: 2015年7月18日
 *      Author: Administrator
 */

#ifndef C_PLUS_PLUS_CHAPTERS03__04CPPSTACK_H_
#define C_PLUS_PLUS_CHAPTERS03__04CPPSTACK_H_

struct Stack{
	struct Link{
		void* data;
		Link* next;
		void init(void* data,Link* next);
	}* head;
	void init();
	Stack* push(void* data);
	void* pop();
	void* peek();
	void cleanUp();

};
#endif /* C_PLUS_PLUS_CHAPTERS03__04CPPSTACK_H_ */
