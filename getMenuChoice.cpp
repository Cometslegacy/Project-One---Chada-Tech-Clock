#include <iostream>
#include <string>

#include "Header.h"

using namespace std;
/**
 * Gets menu choice 1 through maxChoice, inclusive
 *
 * @param maxChoice, maximum choice index, a number between 2 and 9, inclusive
 * @return the first legal choice input, could be 1 through maxChoice, inclusive
 */
unsigned int getMenuChoice(unsigned int maxChoice) {
	/**
	 * You may change this in your program, but first please get it working here with this function signature.
	 * TIPS: take the input in a loop, check that it is in range, and exit the loop only once it is.
	 * Clearing the screen and printing the the menu are handled by a separate thread, and happen every second,
	 * so here you just get character(s) or numbers from the user and do not print error messages.
	 */
	 // TODO: your code here, 
	unsigned int x;	


	while (true) {

		cin >> x;

		if (x <= maxChoice && x>0) {
			break;
		}
	}

	 // return the value
	return x;
}