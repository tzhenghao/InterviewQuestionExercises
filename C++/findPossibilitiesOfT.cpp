// Name: Zheng Hao Tan
// Email: tanzhao@umich.edu
// Date: 12/31/2013

// Question: Given a number T, print out all the possible ways to get to T.
// Example: T = 5
// 1 + 1 + 1 + 1 + 1
// 2 + 1 + 1 + 1
// 3 + 1 + 1
// 4 + 1
// 3 + 3

// Note that 3 + 2 is equal to 2 + 3, so you don't have to print both cases.

// Explanation: One way that we can use to approach this question is to use a
//				knapsack approach, along with some conditions/assumptions that
//				we can use to help optimize our problem.

// Assumptions: 1.	The numbers that we are going to take the sum of must always be
//					more than 0. If this is false, we will get an infinite amount of
//					possibilities.

#include <iostream>
using namespace std;

// Prototype.
void printPossibilities(int num, int count);

int main()
{
	// Recursive solution.
	printPossibilities(num, 1);

	return 0;
}

// REQUIRES: a valid num.
// EFFECTS: Prints out the possibilities to get to num recursively.
void printPossibilities(int num, int count) 
{
	if (num == 0)
		return;
	else if (num == 1)
		cout << "1" << endl;
	else if (num / 2 == 0) {

		for (int i = 0; i < count; ++i)
			cout << num / 2 << " + " << num / 2;
		cout << endl;

		printPossibilities(num / 2, count * 2);
	}
	else {
		
		for (int i = 0; i < count; ++i)
			cout << num / 2 << " + " << num / 2;
		cout << " + 1" << endl;

		printPossibilities(num / 2, count * 2);
	}
	
}
