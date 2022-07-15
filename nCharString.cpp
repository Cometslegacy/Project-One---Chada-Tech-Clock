#include <iostream>
#include <string>

#include "Header.h"

using namespace std;
/**
 * Returns a string of length n, each character a c.
 * For example, nCharString(5, '*') should return "*****"
 *
 * @param n string length, >=0
 * @return string of n c's
 */

#include <iostream>
#include <string>
#include "header.h"
using namespace std;

string nCharString(size_t n, char c) {
	/**
	 * You may wish to change this function when you bring it into your program
	 * For now please get it to work here with the existing function signature
	 * You may assume <string> has been included
	 */
	 // TODO: your code here to implement the method

	string x;

	x = x.append(n, c);

	 // return the n character string
	return x;
}