#include <iostream>
using namespace std;

enum Color{
    red = 1,
    blue = 2,
    black = 3
};

int main(){
    Color c = red;

    switch (c){
        case red :
            cout << "red is " << red << endl;
            break;
        case blue :
            cout << "blue is " << blue << endl;
            break;
        case black :
            cout << "black is " << black << endl;
            break;
        defalut :
            cout << "no color match " << endl;
    }
}
