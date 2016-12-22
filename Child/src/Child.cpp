/**
 * Child.cpp
 *
 * The Child program is a loop that will ask you why until you typed stop.
 *
 * Created on: 22.12.2016
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

/**
 * main() is where the program execution begins.
 */
int main(){

	/**
	 * This is the input Variable.
	 */
	string input;

	/**
	 * The main loop repeats until you type stop.
	 */
	while( input != "stop" ){

		/**
		 * The same question over and over again.
		 */
		cout << "why?" << endl;

		/**
		 * your input.
		 */
		cin >> input;

	}

	/**
	 * If you had typed stop.
	 */
	cout << "okay." << endl;

}
