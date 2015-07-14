#include <iostream>
using namespace std;

void function1(int i){
	int j = i;		
}

int a,b,c,d;

int main(){
	int i,j,k;
	cout << "function1() : " << (long) &function1 << endl;
	cout << "a : " << (long) &a << endl;
	long ai = (long) &i;
	long aj = (long) &j;
	long ak = (long) &k;
	cout << "i : " << ai << endl;
	cout << "j : " << aj << endl;
	cout << "k : " << ak << endl;
	// 相继定义的变量的内存地址是连续的,根据自己的数据类型的字节数隔开
	cout << "aj - ai = " << aj - ai << endl;
	cout << "ak - aj = " << ak - aj << endl;
	cout << "b : " << &b << endl;

	// 指针定义
	a = 50;
	int* ipa = &a;
	// ipa 保存的a变量的地址  通过*ipa可以访问a的值
	*ipa = 100;
	cout << "a = " << a << endl;
	cout << "*ipa = " << *ipa << endl;
	cout << "ipa = " << ipa << endl;
	cout << "a : " << &a << endl;


}


