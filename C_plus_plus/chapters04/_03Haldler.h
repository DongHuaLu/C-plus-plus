/*
 * _03Haldler.h
 *
 *  Created on: 2015年7月20日
 *      Author: ludonghua
 */

#ifndef C_PLUS_PLUS_CHAPTERS04__03HALDLER_H_
#define C_PLUS_PLUS_CHAPTERS04__03HALDLER_H_

class Handler{
	struct Cheshire;
	Cheshire* c;
public:
	void initialize();
	void cleanup();
	int read();
	void change(int);
};
#endif /* C_PLUS_PLUS_CHAPTERS04__03HALDLER_H_ */
