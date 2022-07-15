#include <iostream>
#include <string>

#include "Header.h"

using namespace std;
/**
 * Adds one minute
 */
void addOneMinute() {
	/**assume you have working getMinute(), setMinute(m), and addOneHour()
	 * Feel free to change these in your program, but for now please get things to work with
	 * these function signatures.
	 * if getMinute() is between 0 and 58 inclusive, add 1 and setMinute() to the new value
	 * if getMinute() is 59 the minutes must be set to 0 and you must call addOneHour()
	 * test will set hours and minutes to 0, then addOneMinute 60 times
	 */
	 //TODO: Your code here

	int x;

	x = getMinute();

	if ((x >= 0) && (x < 59)) {
		setMinute(x + 1);
	}

	else if (x == 59) {
		x = 0;
		addOneHour();
	}

	 // nothing to return, just setMinute to the appropriate value and use addOneHour if needed
}