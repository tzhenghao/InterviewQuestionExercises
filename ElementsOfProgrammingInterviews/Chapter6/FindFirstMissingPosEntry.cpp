#include <iostream>

int findFirstMissingPosEntry(vector <int> &a) {


	int minSoFar = 0;

	for (int i = 0; i < a.size() - 1; ++i) {

		if (a[i] > 0 && minSoFar == a[i]) {
			++minSoFar;
		}
	}

	return minSoFar;
}
