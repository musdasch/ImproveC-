/*
 * limits.cpp
 *
 * The limits program is a example from the book "C++ Einfürung und Professionelle Programmierung"
 * This program outputs all limits from trivial data types.
 *
 * Created on: 04.12.2016
 * Author: Tim Vögtli
 */
#include <iostream>
#include <climits>
#include <limits>
#include <iomanip>
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

	cout << "Anzahl Bytes:" << endl;
	cout << "int: " << sizeof( int ) << endl;
	cout << "long: " << sizeof( long ) << endl;
	cout << "long long: " << sizeof( long long ) << endl;

	cout << endl << "Gleitkommazahl" << endl;
	cout << endl;
	cout << "Float-Min: " << numeric_limits<float>::min() << endl;
	cout << "Float-Max: " << numeric_limits<float>::max() << endl;
	cout << endl;
	cout << "Double-Min: " << numeric_limits<double>::min() << endl;
	cout << "Double-Max: " << numeric_limits<double>::max() << endl;
	cout << endl;
	cout << "Long-Double-Min: " << numeric_limits<long double>::min() << endl;
	cout << "Long-Double-Max: " << numeric_limits<long double>::max() << endl;
	cout << endl;
	cout << "Anzal Byts:" << endl;
	cout << "float: " << sizeof( float ) << endl;
	cout << "double: " << sizeof( double ) << endl;
	cout << "long double: " << sizeof( long double ) << endl;

	return 0;
}
