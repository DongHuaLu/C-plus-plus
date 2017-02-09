#include <iostream>
using namespace std;

int main(){
    int * a = new int;
    *a = 1;
    int i = 2;

    int *b = new int;
    *b = i;

    cout << "*a=" << *a << "\n" <<
    "a=" << a << "\n" <<
    "*b=" << *b << "\n" <<
    "b=" << b<< "\n" <<
    "&i=" << &i << "\n" <<
    "i=" << i << 
    endl;

    delete a;
    delete b;
    //delete &i;

    cout << "====================================\n" << "*a=" << *a << "\n" << "a=" << a << "\n" << "*b=" << *b << "\n" << "b=" << b<< "\n" << "&i=" << &i << "\n" << "i=" << i <<  endl;

    delete a;

    cout << "====================================\n" << "*a=" << *a << "\n" << "a=" << a << "\n" << "*b=" << *b << "\n" << "b=" << b<< "\n" << "&i=" << &i << "\n" << "i=" << i <<  endl;




}
