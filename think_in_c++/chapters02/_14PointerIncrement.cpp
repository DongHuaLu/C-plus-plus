// 指针算数 指针++改变指正移向下一个值
#include <iostream>
using namespace std;

typedef struct{
    int i;
    double d;
    long l;
    char c;
} Struct1;


int main(){
    int i[10];
    double d[10];
    int* ip = i;
    double* dp = d;
    cout<<"ip : "<<(long)ip<<endl;
    ip++;
    cout<<"ip++ : "<<(long)ip<<endl;
    cout<<"dp : "<<(long)dp<<endl;
    dp++;
    cout<<"dp++ : "<<(long)dp<<endl;

    Struct1 s[10];
    Struct1* sp = s;
    cout << "Struct1 size of : " << sizeof(Struct1) << endl;
    cout << "sp : " << (long)sp << endl;
    sp++;
    cout << "sp++ : " << (long)sp << endl;
}

