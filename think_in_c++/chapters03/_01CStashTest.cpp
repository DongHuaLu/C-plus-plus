/**
 * C风格的stashTest
 */
#include <iostream>
#include <string>
#include <cassert>
#include <fstream>

#include "_01CStash.h"
using namespace std;

int main(){
	CStash intStash,stringStash;
	initialize(&intStash,sizeof(int));
	for(int i=0;i<100;i++){
		add(&intStash,&i);
	}
	for(int i=0;i<count(&intStash);i++){
		cout << "index " << i << " is "
			<< *(int*)fetch(&intStash,i)
			<< endl;
	}
	// -----------------------------------
	string line;
	ifstream in;
	const int buffSize = 100;
	initialize(&stringStash,sizeof(char) * buffSize);
	in.open("_01CStashTest.cpp");
	assert(in);
	while(getline(in,line)){
		add(&stringStash,line.c_str());
	}
	int i=0;
	char* cp;
	while((cp = (char*)fetch(&stringStash,i++))!=0){
		cout << "fetch string i = " << i << " = " << cp << endl;
	}
	cleanup(&intStash);
	cleanup(&stringStash);
}
