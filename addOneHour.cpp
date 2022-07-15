#include <iostream>
#include <string>

#include "Header.h"

using namespace std;
/**
 * Adds one hour
 */
void addOneHour() {
	/** Assume you have a working getHour() and setHour(h)
	 * Feel free to change things around in your code, but first please get it working here
	 * with these function signatures.
	 * if getHour() is between 0 and 22 inclusive, add 1 and setHour() to that
	 * if getHour() is 23 the next value for hour is 0 so setHour() to that
	 * test will check values of hours from 0 to 23 from getHour()
	 */
	 // TODO: Your code here

	int x;

	x = getHour();

	if ((x >= 0) && (x < 23)) {
		setHour(x + 1);
	}

	else if (x == 23) {
		setHour(0);

	}

	 // nothing to return, just setHour to the appropriate value
}