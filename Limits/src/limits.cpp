/*
 * limits.cpp
 *
 * The limits program is a example from the book "C++ Einfürung und Professionelle Programmierung"
 * This program outputs all limits from trivial data types.
 *
 * Created on: 04.12.2016
 * Author: Tim Vögtli
 */
#include<iostream>
#include<climits>;
using namespace std;

int main(){

	cout << "Grenzwerte für Triviale Datentypen: " << endl;
	cout << endl << "Ganzzahlen: " << endl;
	cout << endl;
	cout << "INT_MIN: " << INT_MIN << endl;
	cout << "INT_MAX: " << INT_MAX << endl;
	cout << endl;
	cout << "LONG_MIN: " << LONG_MIN << endl;
	cout << "LONG_MAX: " << LONG_MAX << endl;
	cout << endl;
	cout << "LLONG_MIN: " << LLONG_MIN << endl;
	cout << "LLONG_MAX: " << LLONG_MIN << endl;
	cout << endl;
	cout << "Unsigned Grenzwerte:" << endl;
	cout << endl;
	cout << "UINT_MAX: " << UINT_MAX << endl;
	cout << "ULONG_MAX: " << ULONG_MAX << endl;
	cout << "ULLONG_MAX: " << ULLONG_MAX << endl;
	cout << endl;
	cout << "Anzahl Bytes: " << endl;
	cout << "int: " << sizeof( int ) << endl;
	cout << "long: " << sizeof( long ) << endl;
	cout << "long long: " << sizeof( long long ) << endl;

	return 0;
}
