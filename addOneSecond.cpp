#include <iostream>
#include <string>

#include "Header.h"

using namespace std;
/**
 * Adds one second
 */
void addOneSecond() {
	/** assume you have working getSecond(), setSecond(s), and addOneMinute()
	 * addOneMinute will take care of the hours if necessary
	 * Feel free to change things around in your program, but for now please make this work with these function signatures.
	 * if getSecond() is between 0 and 58 inclusive, add 1 and setSecond()
	 * if getSecond() is 59, seconds wrap around to 0 and you need to call addOneMinute()
	 * test will set minutes to 4 and seconds to 0, then addOneSecond 60 times
	 */
	 // TODO: your code here

	int x;

	x = getSecond();

	if ((x >= 0) && (x < 59)) {
		setSecond(x + 1);
	}

	else if (x == 59) {
		setSecond(0);
		addOneMinute();
	}


	// nothing to return, just call setSecond() with the right value and addOneMinute() when needed
}