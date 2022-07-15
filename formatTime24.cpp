#include <iostream>
#include <string>

#include "Header.h"

using namespace std;
/**
 * Formats the time in military format

 *
 * @param h, hours 0 to 23
 * @param m, minutes 0 to 59
 * @param s, seconds 0 to 59
 *
 * @return hh:mm:ss
 */


string formatTime24(unsigned int h, unsigned int m, unsigned int s) {
	// You may assume <string> has been imported and the method twoDigitString works
	// for example, twoDigitString(7) returns "07" and twoDigitString(59) returns "59"
	// That should simplify your work here and help you not repeat code.
	// You need a colon betweeh hours and minutes and between minutes and seconds.
	// Tests will pass in (7, 24, 9) and (23, 0, 59) and expect 07:24:09 and 23:00:59
	// You may change this function in the program you submit, but please get it to work
	// here first, with this function signature.
	// TODO: Your code here

	string x;

	x = twoDigitString(h) + ":" + twoDigitString(m) +":" + twoDigitString(s);

	// return time as hh:mm:ss

	return x;
}