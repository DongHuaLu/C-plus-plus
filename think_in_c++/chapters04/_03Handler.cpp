/*
 * _03Handler.cpp
 *
 *  Created on: 2015年7月20日
 *      Author: ludonghua
 */

#include "_03Haldler.h"

struct Handler::Cheshire{
	int i;
};

void Handler::initialize(){
	this->c = new Cheshire;
	c->i = 0;
}

void Handler::change(int i){
	this->c->i = i;
}

int Handler::read(){
	return this->c->i;
}

void Handler::cleanup(){
	delete c;
}
