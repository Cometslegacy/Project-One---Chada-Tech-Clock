#include <iostream>
#include <string>

#include "Header.h"

using namespace std;
/**
 * Formats a number as 2 digits, with a leading 0 if needed
 *
 * @param n number to format, assumed between 0 and 59, inclusive
 * @return two digit string representation of number
 */


string twoDigitString(unsigned int n) {
	/**
	 * You may wish to change this function when you bring it into your program.
	 * For now please get it to work here with the existing function signature.
	 * You may assume <string> has been included.
	 */
	 // TODO: your code here to implement the method
	string x = "";

	x = to_string(n);
	if (n < 10){
		x.insert(0, "0");
	}

	 // return the two digit string
	return x;
}