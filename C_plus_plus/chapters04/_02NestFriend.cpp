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

struct Holder {
private:
	int a[sz];
public:
	void initialize();
	struct Pointer;
	//friend struct Pointer;
	struct Pointer {
	private:
		Holder* h;
		int* p;
	public:
		void initialize(Holder* h);
		void next();
		void previous();
		void top();
		void end();
		int read();
		void set(int i);
	};
};

void Holder::initialize() {
	memset(a, 0, sz * sizeof(int));
}

void Holder::Pointer::initialize(Holder* h) {
	this->h = h;
	this->p = h->a;
}

void Holder::Pointer::next() {
	if (p < &(h->a[sz - 1]))
		p++;
}

void Holder::Pointer::previous() {
	if (p > &(h->a[0]))
		p--;
}

void Holder::Pointer::top() {
	p = &(h->a[0]);
}

void Holder::Pointer::end() {
	p = &(h->a[sz - 1]);
}

int Holder::Pointer::read() {
	return *p;
}

void Holder::Pointer::set(int i) {
	*p = i;
}

int main() {
	Holder h;
	Holder::Pointer p1, p2;
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
