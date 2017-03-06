/*
 * main.cpp
 *
 * The rectangle program is a program to use a class structure. the main loads the rectangle class and
 *
 * Created on: 06.03.2017
 * Author: Tim Voegtli
 */

/**
 * Includes the iostream for input / output;
 */
#include <iostream>

/**
 * Includes the Rectangle Class.
 */
#include "Rectangle.h"

/**
 * Using the namespace std for the iostream.
 */
using namespace std;

int main(){

	/**
	 * Init tow variables for the rectangle
	 */
	int
		x = 0,
		y = 0;

	/**
	 * Set the variable x for the rectangle.
	 */
	cout << "Set X: " << endl;
	cin >> x;

	/**
	 * Set the variable y for the rectangle.
	 */
	cout << "Set Y: " << endl;
	cin >> y;

	/**
	 * Initialise and declaride the rectangle.
	 */
	Rectangle rectangle = Rectangle( x, y );

	/**
	 * Print the area.
	 */
	cout << "Area: " << rectangle.getArea();

	return 0;
}



