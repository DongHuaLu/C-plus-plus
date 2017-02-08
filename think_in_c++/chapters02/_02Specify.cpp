// 说明符用于改表数据类型具有的最大值和最小值,或者是否使用符号位
// 说明符有 long、short,signed,unsigned
#include <iostream>
using namespace std;

int main(){
	short int si;
	int i;
	long int li;
	float f;
	double d;
	long double ld;
	// 不存在long float,也不存在short的浮点数
	unsigned short int usi;
	signed long int sli;
	// 默认是signed


	cout << " short int : " << sizeof(si)
		<< "\n int : " << sizeof(i)
		<< "\n long int : " << sizeof(li)
		<< "\n float : " << sizeof(f)
		<< "\n double : " << sizeof(d)
		<< "\n long double : " << sizeof(ld)
		<< "\n unsigned short int : " << sizeof(usi)
		<< "\n signed long int : "<< sizeof(sli)<<endl;
}

