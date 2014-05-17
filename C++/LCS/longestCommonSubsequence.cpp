// Zheng Hao Tan
// Date: April 26, 2014

// This program returns the lowest common subsequence of two given strings.

#include <iostream>
#include <vector>
using namespace std;

unsigned int longest_common_subsequence(string X, string Y) {

	unsigned xLen = X.size();
	unsigned yLen = Y.size();

	// Initialization.
	vector<vector<unsigned>> C(xLen+1, vector<unsigned>(yLen+1, 0));
	for (unsigned i=0; i<=xLen; ++i) C[i][0] = 0;
	for (unsigned j=0; j<=yLen; ++j) C[0][j] = 0;

	for (unsigned i = 1; i <= xLen; ++i) {

		for (unsigned j = 1; j <= yLen; ++j) {

			if (X[i-1] == Y[j-1]) {
				
				C[i][j] = std::max(C[i][j-1], C[i-1][j]) + 1;
			}
			else
				C[i][j] = C[i][j-1];
		}
	}

	return C[xLen][yLen];
}

int main() {

	cout << "Please enter first word: \n";
	cin >> word1;

	cout << "Please enter second word: \n";
	cin >> word2;

	cout << "Longest subsequence length: ";
	cout << longest_common_subsequence(word1, word2);
	cout << "\n";

	return 0;
}
