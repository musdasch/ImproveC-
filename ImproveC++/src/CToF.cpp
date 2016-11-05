/*
 * CToF.cpp
 *
 * CToF is a program to convert celsius to fahrenheit.
 * It is a project to improve my c++ skills.
 *
 * Created on: 05.11.2016
 * Author: Tim Vögtli
 */

#include <iostream>
#include <cstdlib>
using namespace std;


int main(){

	float c;
	cout << "Celsius: ";
	cin >> c;
	cout << "Celsius: " << c << " is Fahrenheit: " <<  ( ( c  * 1.8 ) + 32 ) << endl;

	return 0;
}
