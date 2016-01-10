#include <iostream>

using namespace std;

// Brute force approach.

void moveOver(vector<int> & arr, int index) {

	int i = index;

	while (i < arr.size() - 2) {
		arr[i] = arr[i + 1];
		++i;
	}
}

void deleteKeyfromArray(vector<int> &arr, int key) {

	int count = arr.size() - 1;
	for (unsigned int i = 0; i < arr.size() - 1; ++i) {

		if (arr[i] == key) {
			moveOver(arr[i], i);
			--count;
		}
	}
}

// More efficient approach.

void deleteKeyfromArray(vector<int> &arr, int key) {

	int movingPtr = 0;

	for (unsigned int i = 0; i < arr.size() - 1; ++i) {

		if (arr[i] != key) {
			arr[movingPtr++] = arr[i];
		}

	}
