/**
 * ForLoop.cpp
 *
 * The ForLoop program is a program to use a for loop.
 *
 * Created on: 12.02.2017
 * Author: Tim Vögtli
 */

/**
 * The include of the iostream library.
 */
#include<iostream>

/**
 * use the namespace std so that you haven't to typed std::
 */
using namespace std;

int main(){

	/**
	 * This is the input Variable.
	 */
	int input = 0;

	/**
	 * It is used to input a number for the for loop.
	 */
	cout << "Count: ";
	cin >> input;

	/**
	 * The for loop.
	 */
	for( int i = 0; i < input; i++ ){

		/**
		 * counts from 0 to the number the user have given.
		 */
		cout << "Count: " << i << endl;

	}
}
