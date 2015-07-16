#include <iostream>
using namespace std;

int func(int i){
    cout << "i = " << i << endl;
    return i;
}

int main(){
   int (*fp1)(int);
   fp1 = func;
   (*fp1)(2);

   int (*fp2)(int) = func;
   (*fp2)(55);
}
