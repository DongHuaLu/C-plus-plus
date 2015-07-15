#include <iostream>
using namespace std;
// 定义一个宏,P(EX)
#define P(EX) cout << #EX << " : " << EX << endl;

int main(){
    int a[10];
    for(int i=0;i<10;i++){
        a[i] = i;
    }
    int* ip = a;
    P(*ip);// 0;
    P(*++ip);// 1; 
    P(*(ip+3));// 4
    P(*(--ip)); // 0
    int* ip2 = ip+3; // 3
    P(*ip2); // 3
    P(*--ip2); // 2
    P(*(ip2-1)); // 1
    //  P(*(ip-ip2)) 无法操作,编译报错

}
