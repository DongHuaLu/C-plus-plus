/*
 * CStashTest.cpp
 *
 *  Created on: 2015年7月17日
 *      Author: ludonghua
 */
#include "CStash.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	CStash intStash,stringStash;
	const int buffSize = 100;
	initialize(&intStash,sizeof(int));
	for(int i=0;i<1000;i++){
		add(&intStash,&i);
	}
	for(int i=0;i<count(&intStash);i++){
		cout << "index " << i << " is "
			<< *(int*)fetch(&intStash,i)
			<< endl;
	}
	initialize(&stringStash,sizeof(char) * buffSize);
}
