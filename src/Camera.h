/*
 * Camera.h
 *
 *  Created on: 4 avr. 2015
 *      Author: jfellus
 */

#ifndef CAMERA_H_
#define CAMERA_H_

#include <pg.h>
#include <image.h>

class Camera {
public:
	std::string path;
	ImageRGB frame;

	OUTPUT(ImageRGB, frame);

public:

	void init() {
		// ... path
	}

	void process() {
		// TODO
	}


};


#endif /* CAMERA_H_ */
