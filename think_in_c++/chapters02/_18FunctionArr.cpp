#include <iostream>
using namespace std;

#define DF(N) void N() { cout << #N << "func called " << endl; }

DF(f1);DF(f2);DF(f3);DF(f4);DF(f5);DF(f6);
// 函数数组
void (*funtable[])() = {f1,f2,f3,f4,f5,f6};

int main(){
    for(int i=0;i<6;i++){
       (*funtable[i])();
    }
}
