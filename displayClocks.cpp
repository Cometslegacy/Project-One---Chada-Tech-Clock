#include <iostream>
#include <string>

#include "Header.h"

using namespace std;
/**
 * Display the clocks
 *
 * @param h, hours 0 to 23
 * @param m, minutes 0 to 59
 * @param s, seconds 0 to 59
 */
void displayClocks(unsigned int h, unsigned int m, unsigned int s) {
	// The code in your submitted program may vary. For now, please get this to work with the given
	// function signature.
	// You may assume you have a working nCharString and formatTime24 and formatTime12 and <iostream> has been imported
	//
	// nCharString(27,'*') gives a string of 27 stars. nCharString(3,' ') gives 3 spaces
	// formatTime12(h, m, s) and formatTime24(h, m, s) give the formatted time as specified in the assignment	
	// test will pass in (0, 59, 9)
	// TODO: Your code here, follow the comments for each line
	
	// cout 27 stars + 3 spaces + 27 stars + endl
	cout << nCharString(27, '*') << nCharString(3, ' ') << nCharString(27, '*') << endl;

	// cout 1 star + 6 spaces + 12-HOUR CLOCK + 6 spaces + 1 star + 3 spaces
	cout << nCharString(1, '*') << nCharString(6, ' ') << "12-HOUR CLOCK" << nCharString(6, ' ') << nCharString(1, '*') << nCharString(3, ' ');

	// cout 1 star + 6 spaces + 24-HOUR CLOCK + 6 spaces + 1 star + endl
	cout << nCharString(1, '*') << nCharString(6, ' ') << "24-HOUR CLOCK" << nCharString(6, ' ') << nCharString(1, '*') << endl;

	// cout an endl for a blank line
	cout << endl;

	// cout 1 star + 6 spaces + formatTime12(h, m, s) + 7 spaces + 1 star + 3 spaces
	cout << nCharString(1, '*') << nCharString(6, ' ') <<	formatTime12(h, m, s) << nCharString(7, ' ') << nCharString(1, '*') << nCharString(3, ' ');

	// cout 1 star + 8 spaces + formatTime24(h, m, s) + 9 spaces + 1 star + endl
	cout << nCharString(1, '*') << nCharString(8, ' ') << formatTime24(h, m, s) << nCharString(9, ' ') << nCharString(1, '*') << endl;
	
	// cout 27 stars + 3 spaces + 27 stars + endl
	cout << nCharString(27, '*') << nCharString(3, ' ') << nCharString(27, '*') << endl;

}