/*
 * _01SuperVar.cpp
 *
 *  Created on: 2015年7月21日
 *      Author: ludonghua
 */

#include <iostream>
using namespace std;

class SuperVar{
	enum{
		charType,
		intType,
		floatType
	} varType;
	union{
		int i;
		float f;
		char c;
	};
public:
	SuperVar(char ch);
	SuperVar(int ii);
	SuperVar(float ff);
	void print();
	void set(char ch);
	void set(int ii);
	void set(float ff);
};

SuperVar::SuperVar(char ch){
	varType = charType;
	c = ch;
}

SuperVar::SuperVar(float ff){
	varType = floatType;
	f = ff;
}

SuperVar::SuperVar(int ii){
	varType = intType;
	i = ii;
}

void SuperVar::print(){
	switch(varType){
	case charType:
		cout << "char is " << c << endl;
		break;
	case floatType:
		cout << "float is " << f << endl;
		break;
	case intType:
		cout << "int is " << i << endl;
		break;
	}
}

void SuperVar::set(char ch){
	this->c = ch;
}
void SuperVar::set(float ff){
	this->f = ff;
}
void SuperVar::set(int ii){
	this->i = ii;
}

int main(){
	SuperVar i(10),f(2.1f),c('b');
	i.print();
	f.print();
	c.print();
}

