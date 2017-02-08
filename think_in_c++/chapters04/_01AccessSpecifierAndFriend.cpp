/*
 * _01AccessSpecifier.cpp
 *
 *  Created on: 2015年7月19日
 *      Author: Administrator
 */

struct X;

struct Y {
	void f(X*);
};

struct X {
private:
	int i;
public:
	void initialize();
	// 声明友元函数,g可以访问X中的private变量
	friend void g(X*, int);
	friend void Y::f(X*);
	friend struct Z;
	friend void h();
};

void X::initialize() {
	int i = 0;
}

void g(X* x,int i){
	x->i = i;
}

void Y::f(X* x){
	x->i = 10;
}

struct Z{
private :
	int j;
public:
	void initialize();
	void g(X*);
};

void Z::initialize(){
	j = 20;
}

void Z::g(X* x){
	x->i += j;
}

void h(){
	X x;
	x.i = 100;
}

int main(){
	X x;
	Z z;
	z.g(&x);
}
