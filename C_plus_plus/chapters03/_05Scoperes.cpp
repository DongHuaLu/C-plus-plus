/*
 * _05Scoperes.cpp
 *
 *  Created on: 2015年7月18日
 *      Author: Administrator
 */
#include <iostream>
using namespace std;
int a;
void f(){
	cout << "global f called" << endl;
}

struct S{
	int a;
	void f();
};

void S::f(){
	::f();// 调用全局f()
	::a++;// 全局a++
	a--;// S->a--;
}

int main(){
	S* s = new S;
	s->f();
	cout<< "global a = " << a << endl;
	cout << "S->a = " << s->a << endl;
}


