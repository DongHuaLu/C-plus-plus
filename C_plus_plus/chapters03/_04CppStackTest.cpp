/*
 * _04CppStackTest.cpp
 *
 *  Created on: 2015年7月18日
 *      Author: Administrator
 */

#include "_04CppStack.h"
#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
using namespace std;

int main(){
	Stack* strStack = new Stack;
	ifstream in;
	in.open("_04CppStackTest.cpp");
	assert(in);
	string line;
	while(getline(in,line)){
		strStack->push(new string(line))->push(new string(line));
	}
	string* s;
	while((s = (string*)strStack->pop())!=0){
		cout << *s << endl;
		delete s;
	}
	strStack->cleanUp();

}

