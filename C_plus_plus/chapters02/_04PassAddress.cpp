// 通过指针将外部变量的地址传入函数中,以便修改外部变量的值
#include <iostream>
using namespace std;
// 通过指针
void function1(int* a){
	cout << "a : " << a << endl;
	cout << "a = " << *a << endl;
	*a += 1;
	cout << "a = " << *a << endl;	
}
// 通过引用
void function2(int& b){
	cout << "b : " << b << endl;
	cout << "b = " << &b << endl;
	b += 1;
	cout << "b = " << b << endl;
}

int main(){
	int i = 50;
	cout << "i : " << &i << endl;
	cout << "i = " << i << endl;
	function1(&i);
	cout << "i = " << i << endl;
	function2(i);
	cout << "i = " << i << endl;
}
