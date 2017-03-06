/*
 * Rectangle.h
 *
 *  Created on: 06.03.2017
 *      Author: tv
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle {

	public:
		Rectangle( int x, int y );
		virtual ~Rectangle();
		int getArea();

	private:
		int area	= 0;
};

#endif /* RECTANGLE_H_ */
