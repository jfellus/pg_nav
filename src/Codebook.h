/*
 * Codebook.h
 *
 *  Created on: 5 avr. 2015
 *      Author: jfellus
 */

#ifndef CODEBOOK_H_
#define CODEBOOK_H_

#include <pg.h>
#include <matrix.h>

class Codebook {
public:
	Matrix codebook;
	uint K,D;

	OUTPUT(Matrix, codebook)
	OUTPUT(float*, (float*&)codebook)
public:
	void init() {codebook.init(K,D);}
	void process() {}
};



#endif /* CODEBOOK_H_ */
