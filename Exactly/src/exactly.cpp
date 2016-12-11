/*
 * exactly.cpp
 *
 * This program is a example for accuracy with float numbers. The results s1 and s2 should be the same
 * but computer arithmetic has some inaccuracies. for improvement of the accuracy
 * you have to order the sums and add the smallest number first.
 *
 * Created on: 11.12.2016
 * Author: Tim Vögtli
 */

#include<iostream>
using namespace std;

int main(){
	//Set the variables
	float a = 1.234567E-7, b = 1.000000, c = -b, s1, s2;

	//Calculate the sum 1
	s1 = a + b;
	s1 += c;

	//Calculate the sum 2
	s2 = a;
	s2 += b + c;

	//Discripton
	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
	cout << "Sum 1 = " << a << " + " << b << endl;
	cout << "Sum 1 = Sum 1 + " << c << endl;
	cout << "Sum 1 = " << s1 << endl << endl;

	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
	cout << "Sum 2 = " << a << endl;
	cout << "Sum 2 = Sum 2 + " << b << " + " << c << endl;
	cout << "Sum 2: " << s2 << endl;
}



