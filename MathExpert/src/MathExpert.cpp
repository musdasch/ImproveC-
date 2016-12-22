/*
 * MathExpert.cpp
 *
 * This program is a example for math functions in the cmath library.
 *
 * Created on: 17.12.2016
 * Author: Tim Vögtli
 */
#include<iostream>
#include<cmath>

using namespace std;

int main(){
	float x;

	// input for a number
	cout << "Input: ";
	cin >> x;

	cout << "----------------------------------------------" << endl;

	// output for x
	cout << "x               = " << x << endl;

	// output for the absolute value.
	cout << "fabs(x)         = " << fabs(x) << endl;

	// output for the square root value.
	cout << "sqrt(x)         = " << sqrt(x) << endl;

	// output for sinus value.
	cout << "sin(x)          = " << sin(x) << endl;

	// output for the exponential value.
	cout << "exp(x)          = " << exp(x) << endl;

	// output for the logarithmic value.
	cout << "log(x)          = " << log(x) << endl;

	cout << "----------------------------------------------" << endl;

}
