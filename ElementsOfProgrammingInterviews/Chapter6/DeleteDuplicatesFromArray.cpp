#include <iostream>

void deleteDuplicatesFromArray(vector<int> &a) {

	int movingIndex = 0;

	for (unsigned int i = 1; i < a.size() - 1; ++i) {

		if (a[movingIndex] != a[i]) {
			a[++movingIndex] = a[i];
		}
	}
}
