#include <iostream>
using namespace std;

// QUESTION: Given an array, replace each element in the array
//			 with its next element  (to its RHS) which is larger
//			 than it. If no such element exists, then no need to
//			 replace.
// Example: input: {2, 12, 8, 6, 5, 1, 2, 10, 3, 2}
// 			output: {12, 12, 10, 10, 10, 2, 10, 10, 3, 2}

int main() {

	int testArray[] = {1, 2, 3, 4, 5};

	cout << "Test array input: \n";

	int i = 0;
	while (testArray[i] != '\0') {
		cout << testArray[i++] << " ";
	}
	cout << "\n";

	// Check the array.
	

	cout << "Test array output: \n";

	int i = 0;
	while (testArray[i] != '\0') {
		cout << testArray[i++] << " ";
	}
	cout << "\n";

	return 0;
}