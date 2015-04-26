/*
 * Hog.h
 *
 *  Created on: 4 avr. 2015
 *      Author: jfellus
 */

#ifndef HOG_H_
#define HOG_H_

#include <pg.h>
#include <matrix.h>
#include <image.h>

class Hog {
public:
	uint step;
	Matrix descriptors;

	OUTPUT(Matrix, descriptors);

public:
	void init() {
		// ... step
	}

	void process(const ImageRGB& img) {
		// TODO
	}

};



#endif /* HOG_H_ */
