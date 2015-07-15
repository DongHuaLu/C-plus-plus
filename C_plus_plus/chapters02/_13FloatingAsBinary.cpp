#include "PrintBinary.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc,char* argv[]){
    if(argc<2){
        cout << "arg num less" << endl;
        exit(1);
    }
    double d = atof(argv[1]);
    unsigned char* cp = reinterpret_cast<unsigned char*>(&d);
    for(int i=sizeof(double);i>0;i--){
        printBinary(cp[i]);
        cout << endl;
    }
}
