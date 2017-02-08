/*
 * ConstructorAndDestructors.cpp
 *
 *  Created on: 2015年7月20日
 *      Author: ludonghua
 */

#include <iostream>
using namespace std;

class Obj{
private:
	int i;
public:
	Obj(int i);
	~Obj();
	void set(int i);
	int read();
	void print();
};

Obj::Obj(int i){
	this->i = i;
}

Obj::~Obj(){
	cout << "destructor run " << endl;
	cout << read() << endl;
}

void Obj::set(int i){
	this->i = i;
}

int Obj::read(){
	return i;
}

void Obj::print(){
	cout << this->i << endl;
}

int main(){
	Obj o1(1);
	o1.print();
	{
		Obj o2(100);
		o2.print();
		o1.set(2);
		o2.set(99);
	}
}

