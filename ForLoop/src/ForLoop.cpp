/**
 * ForLoop.cpp
 *
 * The ForLoop program is a program to use a for loop.
 *
 * Created on: 12.02.2017
 * Author: Tim Vögtli
 */

#include<iostream>

using namespace std;

int main(){

	int input = 0;

	cout << "Count: ";
	cin >> input;

	for( int i = 0; i < input; i++ ){
		cout << "Count: " << i << endl;
	}
}
