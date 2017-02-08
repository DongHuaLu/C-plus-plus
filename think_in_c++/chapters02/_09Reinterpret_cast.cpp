// 强制类型转换 reinterpret_cast<type-id> (expression)
#include <iostream>
using namespace std;

const int size = 100;

struct X{int a[size];};

void print(X* x){
    for(int i=0;i<size;i++){
        cout << x->a[i] << " ";
    }
    cout << endl << "-------------------" << endl;
}

int main(){
    X x;
    print(&x);
    int* xp = reinterpret_cast<int*>(&x);
    for(int* i=xp;i<xp+size;i++){
        cout << "i = " << i << endl;
        *i = 0;
    }
    // 不能使用xp来当做 X*,必须把xp转换成 X* 
    print(reinterpret_cast<X*>(xp));
    print(&x);
}
