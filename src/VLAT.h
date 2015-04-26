/*
 * VLAT.h
 *
 *  Created on: 4 avr. 2015
 *      Author: jfellus
 */

#ifndef VLAT_H_
#define VLAT_H_

#include <pg.h>
#include <matrix.h>

class VLAT {
public:
	Matrix signature;

	OUTPUT(Matrix, signature);

public:
	void init() {}

	void process(const Matrix& descriptors, const Matrix& codebook) {

	}

};


#endif /* VLAT_H_ */
