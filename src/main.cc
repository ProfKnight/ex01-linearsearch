/**
* CS V15 Data Structures and Algorithms
* CRN: 33323
* Assignment: EX01-LinearSearch
*
* Statement of code ownership: I hereby state that I have written all of this
* code and I have not copied this code from any other person or source.
*
* @author aknight@vcccd.edu
*/

#include <iostream>
#include "linearsearch.h"

using edu::vcccd::vc::csv15::find;

int main(int argc, char *argv[]) {
	int array[] = {3, 1, 2};
	int64_t index = find(0, array, 3);
	
	std::cout << "Index: " << index << std::endl;
}