#include <iostream>
#include <string>

#include "Header.h"

using namespace std;
// test cases (["Add One Hour", "Add One Minute", "Add One Second", "Exit Program"], 4, 26 or 57)
/**
 * Prints menu
 *
 * @param *strings[], nonempty array of choices
 * @param width, width of each line, will be comfortably bigger than the longest string
 *
 */

void printMenu(const char* strings[], unsigned int numStrings, unsigned char width) {
	/**
	 * In your own program feel free to change the function signature. For now, please first get it to work as is.
	 * You may assume <string> and <iostream> have been imported.
	 * You may assume a function nCharString has been implemented, and you will want to call it for stars and spaces.
	 * string nCharString(size_t n, char c) produces a string of n c's. For example, nCharString(5, '*') returns "*****"
	 * and nCharString (7,' ') will return 7 spaces.
	 */
	 // TODO: Your code here. Use the comments to see the expected format of the menu.

	 // first print width *'s followed by an endl

	cout << nCharString(width, '*') << endl;

	 /** Next, for each string s in the array:
	  * cout a star, a space, the item Number a space a hyphen another space, s,
	  * and enough spaces to get to a length of width - 1 (enough will depend on the length of the current menu item).
	  * Close the line with a star and an endl. The goal is that the stars on the right align with each other and each line
	  * has the same width, passed in as a parameter.
	  * (Hint: calculate the needed number of spaces and use nCharString to produce them)
	  * Skip a line after each line except the last line
	  */

	unsigned int i;
	


	for (i = 0; i < numStrings; i++)
	{
		cout << "* " << i+1 << " - " << strings[i] << nCharString(width - strlen(strings[i]) - 7, ' ') << "*" << endl;

		if (i != numStrings - 1) {
			cout << "\n";
		}

	}	

	  // outside the loop print another width *s followed by an endl

			 
	cout << nCharString(width, '*') << endl;

	return;

}