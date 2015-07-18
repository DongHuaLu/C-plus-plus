/*
 * SizeOfStash.cpp
 *
 *  Created on: 2015年7月18日
 *      Author: Administrator
 */
#include "_01CStash.h"
#include "_02CppStash.h"
#include <iostream>
using namespace std;

struct A {
	int a[10];
};

struct B {
	void func();
};

void B::func() {
}

int main() {
	cout << "size of A : " << sizeof(A) << " bytes" << endl; // 40
	cout << "size of B : " << sizeof(B) << " bytes" << endl; // 1
	cout << "size of CStash : " << sizeof(CStash) << " bytes" << endl; // 24
	cout << "size of CppStash : " << sizeof(CppStash) << " bytes" << endl; // 24
}

