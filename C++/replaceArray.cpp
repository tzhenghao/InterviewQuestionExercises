// Name: Zheng Hao Tan 
// Email: tanzhao@umich.edu	
// Date: May 19, 2014

#include <iostream>
using namespace std;

// QUESTION: Given an array, replace each element in the array
//			 with its next element (to its RHS) which is larger
//			 than it. If no such element exists, then no need to
//			 replace.

// Example: input:  { 2, 12, 8, 6, 5, 1,  2, 10, 3, 2}
// 			output: {12, 12, 8, 6, 5, 2, 10, 10, 3, 2}

// Explanation: The very first solution that I can think of is by doing a brute
//				approach in which I will iterate through the whole entire array
//				and try to modify them if necessary.

// Solution:
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

	i = 0;

	while (testArray[i + 1] != '\0') {

		if (testArray[i] < testArray[i + 1])
			testArray[i] = testArray[i + 1];

		cout << testArray[i++] << " ";
	}
	cout << testArray[i] << "\n";

	cout << "\n";

	return 0;
}
