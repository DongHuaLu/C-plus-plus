#include <iostream>
using namespace std;

int global;

void func();

int main(){
    global = 12;
    cout << global << endl;
    func();
    cout << global <<endl;    
}

