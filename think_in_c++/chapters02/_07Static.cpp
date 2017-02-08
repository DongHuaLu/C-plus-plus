// 被static修饰的变量只会初始化一次,并且变量具有文件作用于,即使使用extern,也不能在另一个文件使用static变量
#include <iostream>
using namespace std;

void func(){
    static int i = 1;
    cout << ++i << endl;
}

int main(){
   for(int i=0;i<10;i++){
       func();
   }
}

