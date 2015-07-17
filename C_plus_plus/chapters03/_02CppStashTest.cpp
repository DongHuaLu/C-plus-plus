/*
 * _03CppStashTest.cpp
 *
 *  Created on: 2015年7月17日
 *      Author: Administrator
 */

#include <iostream>
#include <string>
#include <cassert>
#include <fstream>

#include "_02CppStash.h"
using namespace std;

int main(){
	CppStash intStash,stringStash;
	intStash.initialize(sizeof(int));
	for(int i=0;i<100;i++){
		intStash.add(&i);
	}
	for(int i=0;i<intStash.count();i++){
		cout << "index " << i << " is "
			<< *(int*)intStash.fetch(i)
			<< endl;
	}
	// ------------------------------------
	string line;
	ifstream in;
	const int buffSize = 100;
	stringStash.initialize(sizeof(char) * buffSize);
	in.open("_02CppStashTest.cpp");
	assert(in);
	while(getline(in,line)){
		stringStash.add(line.c_str());
	}
	int i=0;
	char* cp;
	while((cp = (char*)stringStash.fetch(i++))!=0){
		cout << "fetch string i = " << i << " = " << cp << endl;
	}
	intStash.cleanup();
	stringStash.cleanup();
}


