/*
 * _01chars.cpp
 *
 *  Created on: 2017年2月8日
 *      Author: ludonghua
 */
#include <iostream>
using namespace std;

int main(){
	char str[] = "abcdefg";
	cout << sizeof(str) << " : " << str << endl;
    str[2] = '\0';
    cout << str << endl;
}
