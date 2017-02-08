/*
 * _02MemTest.cpp
 *
 *  Created on: 2015年7月21日
 *      Author: ludonghua
 */

#include "_02Mem.h"
#include <cstring>
#include <iostream>
using namespace std;

class MyString{
	Mem* buff;
public:
	MyString();
	MyString(char* chrs);
	~MyString();
	void concat(char* str);
	void print(ostream& os);
};

MyString::MyString(){
	buff = 0;
}

MyString::MyString(char* chrs){
	buff = new Mem(strlen(chrs)+1);
	strcpy((char*)buff->pointer(),chrs);
}

MyString::~MyString(){
	delete buff;
}

void MyString::concat(char* str){
	if(!buff) buff = new Mem;
	strcat((char*)buff->pointer(buff->msize()+strlen(str)+1),str);
}

void MyString::print(ostream& os){
	if(!buff) return;
	os << buff->pointer() << endl;
}

int main(){
	MyString s("this is my string");
	s.print(cout);
	s.concat(" and this is concat");
	s.print(cout);

	MyString s2;
	s2.concat("this str use default constructor");
	s2.print(cout);
}

