/*
 * Rectangle.cpp
 *
 *  Created on: 06.03.2017
 *      Author: tv
 */

#include "Rectangle.h"

Rectangle::Rectangle( int x, int y  ) {
	area = x*y;

}

Rectangle::~Rectangle() {
}


int Rectangle::getArea(){
	return area;
}

