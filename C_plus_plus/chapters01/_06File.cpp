#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream in("in.data");
    ofstream out("out.data");
    string line;
    string wholeFile;
    while(getline(in,line)){
        wholeFile += line + "\n";
        cout << line << endl;
        out << line << "\n";
    }
    cout << "全文件如下 : \n" << wholeFile;
}
