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

#include <cstdint>

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

template <class T>
int64_t find(const T& value, T array[], size_t size) {
	if (array == NULL) return -1;
	for (size_t i = 0; i < size; i++) {
		if (value == array[i]) return i;
	}

	return -1;
}

}}}}