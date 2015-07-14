#include <string>
#include <iostream>
using namespace std;

int main(){
    string s1,s2;
    string s3 = "s3";
    string s4("s4");
    s2 = "s2";
    s1 = s3 + "  " + s2;
    s3 += " append this";
    cout << s1 + " " + s2 << endl;
    cout << s3 << endl;
    }
