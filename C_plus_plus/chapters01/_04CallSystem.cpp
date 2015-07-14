#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string resp;
    resp = system("ls -l");
    cout << resp << endl;
    }
