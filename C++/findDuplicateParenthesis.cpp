// Zheng Hao Tan
// Email: tanzhao@umich.edu
// Date: 3/5/2014


// Question: Give an algorithm for finding duplicate parenthesis
//			 in an expression.

// 1. Assume that the parenthesis are valid.

// Example: ((a + b) + ((c + d))) has 4 of them.

#include <iostream>
#include <string>
using namespace std;

// Prototypes.
int countParenthesis();

int main() 
{
	string line;

	cout << "Please enter string: \n";
	cin >> line;
	
	cout << line << " has " << countParenthesis(line) << " strings\n";

	return 0;
}

// REQUIRES: The entire string.
int countParenthesis(string line) {

	int count = 0;

	for (int i = 0; i < line.length()-1; ++i) {

		if (line[i] == ')' && line[i] == line[i+1])
			++count;
	}

	return count;
}