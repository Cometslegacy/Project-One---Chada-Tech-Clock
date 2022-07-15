#include <iostream>
#include <string>

#include "Header.h"

using namespace std;
/**
 * Formats the time in am/pm format
 *
 * @param h, hours 0 to 23
 * @param m, minutes 0 to 59
 * @param s, seconds 0 to 59
 *
 * @return hh:mm:ss A M or hh:mm:ss P M where hh is between 01 and 12, inclusive
 */



string formatTime12(unsigned int h, unsigned int m, unsigned int s) {
	/* Feel free to adapt this function in your program, but first please get it to work
	here with this signature.
	You may assume you have a working twoDigitString(n) and include <string>
	twoDigitString(n) gives a 0 followed by the character for n if n is a single digit and gives the
	two-digit string if n is two digits, for example twoDigitString(7) returns "07" and twoDigitString(12) returns "12".
	Include colons as separators, add one space after seconds then  A M or P M as appropriate
	Tests will pass in (7, 24, 9), (23, 0, 59), (0, 0, 1), and (12, 0, 59)
	TODO: Your code here */

	string x;

	if (h < 12)
	{
		if (h != 0)
		{
			x = twoDigitString(h) + ":" + twoDigitString(m) + ":" + twoDigitString(s) + " A M";
		}
		
		else if (h == 0)
		{
			x = twoDigitString(h+12) + ":" + twoDigitString(m) + ":" + twoDigitString(s) + " A M";
		}
	}
	else if (h >= 12) 
	{
		if (h == 12)
		{
			x = twoDigitString(h) + ":" + twoDigitString(m) + ":" + twoDigitString(s) + " P M";
		}

		else if (h != 12)
		{
			x = twoDigitString(h - 12) + ":" + twoDigitString(m) + ":" + twoDigitString(s) + " P M";
		}
	}

	// return hh:mm:ss A M or hh:mm:ss P M
	return x;
}