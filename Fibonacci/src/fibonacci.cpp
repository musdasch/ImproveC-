/*
 * fibonacci.cpp
 *
 * The Fibonacci program displays the fibonacci sequence.It starts with a chosen number and ends after a defined length.
 * First you define the number to start with after you define the number of passes.
 *
 * Created on: 11.12.2016
 * Author: Tim Vögtli
 */

#include<iostream>
using namespace std;

int main(){
	//Define variable
	long sum, a, temp, count;

	cout << "Number to start with: ";
	cin >> a;

	cout << endl << "Number of Passes: ";
	cin >> count;
	cout << endl;

	sum = a * 2;
	cout << a << " + " << a << " = " << sum << endl;

	for( long i = 0; i < count; i++ ){
		cout << a << " + " << sum << " = ";
		temp = a + sum;
		a = sum;
		sum = temp;
		cout << sum << endl;
	}

	return 0;
}
