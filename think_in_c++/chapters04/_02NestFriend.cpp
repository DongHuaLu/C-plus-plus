/*
 * _02NestFriend.cpp
 *
 *  Created on: 2015年7月19日
 *      Author: Administrator
 */
#include <iostream>
#include <cstring>
using namespace std;
const int sz = 20;
struct Pointer;
struct Holder {
private:
	int a[sz];
public:
	void initialize();
	// 把Pointer当做Holder的友元,这样Pointer中可以直接访问Holder中非public的成员
	friend Pointer;
};
struct Pointer {
	private:
		Holder* h;
		int* p;
	public:
		void initialize(Holder* hp);
		void next();
		void previous();
		void top();
		void end();
		int read();
		void set(int i);
	};

void Holder::initialize() {
	memset(a, 0, sz * sizeof(int));
}

void Pointer::initialize(Holder* hp) {
	this->h = hp;
	this->p = hp->a;
}

void Pointer::next() {
	if (p < &(h->a[sz - 1]))
		p++;
}

void Pointer::previous() {
	if (p > &(h->a[0]))
		p--;
}

void Pointer::top() {
	p = &(h->a[0]);
}

void Pointer::end() {
	p = &(h->a[sz - 1]);
}

int Pointer::read() {
	return *p;
}

void Pointer::set(int i) {
	*p = i;
}

int main() {
	Holder h;
	Pointer p1, p2;
	int i;

	h.initialize();
	p1.initialize(&h);
	p2.initialize(&h);

	for (i = 0; i < sz; i++) {
		p1.set(i);
		p1.next();
	}
	p1.top();
	p2.end();
	for (i = 0; i < sz; i++) {
		cout << "p1 = " << p1.read() << endl;
		cout << "p2 = " << p2.read() << endl;
		p1.next();
		p2.previous();
	}
}
