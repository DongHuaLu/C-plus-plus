#include <iostream>
using namespace std;
// 定义一个Structure1的struct
struct Structure1{
    char c;
    int i;
    float f;
    double d;
};
// 定义一个struct,名字为Structure2
typedef struct{
    char c;
    int i;
    float f;
    double d;
} Structure2;
// 定义一个
typedef struct SelfRefStructure{
    int i;
    SelfRefStructure* sr;
} SelfRefStructure;

int main(){
    // 定义时,需要 struct Structure1 ....
    struct Structure1 s1,s2;
    s1.i = 100;
    s2.f = 1.1f;

    // 使用typedef Structure2后,可以直接定义 Structure2
    Structure2 s3,s4;
    s3.i = 1;
    s4.c = 'A';

    SelfRefStructure s5,s6;
    SelfRefStructure* sp = &s6;
    sp->i = 100;
    cout << "s6.i = " << s6.i << " = " << sp->i << endl;
    s5.sr = &s6;
    s6.sr = &s5;
    // s5.sr 等同于 SelfRefStructure* sp = &s6;
    s5.sr->i = 5;
    cout << "s6.i = " << s6.i << endl;
    
}
