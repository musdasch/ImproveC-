/*
 * summe.cpp
 *
 * The sum program is a example from the book "C++ Einf�rung und Professionelle Programmierung"
 * It is a program to calculate tow numbers together.
 *
 * Created on: 03.12.2016
 * Author: Tim V�gtli
 */

#include<iostream>
using namespace std;
int main(){
	//Declaration of variables
	int sum, a, b;

	//Input a and b
	cout << "a und b eingeben: ";
	cin >> a >> b;

	//Calculate a and b together
	sum = a + b;

	//Output of a + b
	cout << "Summe = " << sum;
}


