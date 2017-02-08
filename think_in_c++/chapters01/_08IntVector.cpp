#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> intVector;
	for(int i=0;i<10;i++){
		intVector.push_back(i);
	}
	for(int i=0;i<intVector.size();i++){
		cout << intVector[i] << endl;
	}
	cout << "------------------------" << endl;
	for(int i=0;i<intVector.size();i++){
		intVector[i] = intVector[i] + 1;
	}
	for(int i=0;i<intVector.size();i++){
		cout << intVector[i] << endl;
	}

}
