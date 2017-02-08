#include <iostream>
using namespace std;

int main(){
    const int namelenght = 20;
    char name[namelenght];

    cout << "please enter your name " << endl;
    cin.getline(name,namelenght);
    cout << "your name is " << name << endl;
}
