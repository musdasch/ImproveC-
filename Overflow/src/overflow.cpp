/*
 * overflow.cpp
 *
 * The overflow program is a example from the book "C++ Einfürung und Professionelle Programmierung"
 * This program multiply tow numbers together so that they exceeded the limit and displays the result.
 * In this example are 4 bytes per int.
 *
 * Created on: 04.12.2016
 * Author: Tim Vögtli
 */
#include<iostream>
using namespace std;

int main(){
	int a = 500000, b = 100000, wrongSum;
	long rightSum;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	wrongSum = a * b;
	rightSum = ( ( long ) a ) * ( ( long ) b );

	cout << "a * b = " << rightSum << " != " << wrongSum << endl;

	return 0;
}
