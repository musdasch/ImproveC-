/*
 * main.cpp
 *
 * This is the Main to the Sequence program.
 *
 * Created on: 08.03.2017
 * Author: Tim Voegtli
 */

#include <iostream>
using namespace std;


int main(){
	int round = 0, value=1;

	cout << "Rounds:" << endl;
	cin >> round;

	for( int i=0; i< round; i++ ){

		if( 2 < ++value % 5 ){
			if( 10 < value ){
				value = value - 11;
			} else {
				value = value + 11;
			}
		}else {
			value++;
		}

		cout << value << endl;
	}

	return 0;
}
