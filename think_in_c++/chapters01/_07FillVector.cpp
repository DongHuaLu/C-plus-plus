#include <string>
#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
    vector<string> stringVector;
	string str;
	char charArr[256];
    for(int i=0;i<100;i++){
		sprintf(charArr,"%d",i);
		str = charArr;
    	stringVector.push_back(str);
    }
	for(int i=0;i<stringVector.size();i++){
		cout << i << " : " << stringVector[i] << endl;
	}
}
