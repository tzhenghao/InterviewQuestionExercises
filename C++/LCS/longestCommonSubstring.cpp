// Zheng Hao Tan
// Date: April 26, 2014

// This program will take in two strings and determines the maximum substring
// length that they both have in common.

#include <iostream>
#include <vector>
using namespace std;

unsigned int longest_common_substring(string X, string Y) {

	unsigned xLength = X.size();
	unsigned yLength = Y.size();
	
	// Initialization.
	vector<vector<unsigned>> C(xLength+1, vector<unsigned>(yLength+1, 0));
	for (unsigned i=0; i<=xLength; ++i) C[i][0] = 0;
	for (unsigned j=0; j<=yLength; ++j) C[0][j] = 0;

	unsigned int length = 0;

	for (unsigned i = 1; i <= xLength; ++i) {

		for (unsigned j = 1; j <= yLength; ++j) {

			if (X[i-1] == Y[j-1]) {

				C[i][j] = C[i-1][j-1] + 1;

				if (length < C[i][j])
					length = C[i][j];
			}
			else
				C[i][j] = 0;
		}
	}
	
	return length;
}

int main() {
	
	string word1, word2;

	cout << "Please enter first word: \n";
	cin >> word1;

	cout << "Please enter second word: \n";
	cin >> word2;
	
	// Assumming input is correctly formatted...
	cout << "Length of longest common substring between the two words is: ";
	cout << longest_common_substring(word1, word2) << "\n"; 

	return 0;
}
