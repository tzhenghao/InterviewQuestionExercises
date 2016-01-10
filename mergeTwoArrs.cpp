#include <iostream>

using namespace std;

void shift(vector<int> &arrA, const vector<int> &arrB) {

	int temp = 0;
	for (int i = lastA + 1; i < arrA.size(); ++i) {
		temp = arrA[i];
		arrA[i] = arrB[lastB];
		arrA[i + 1] = temp;
	}	
}

void mergeTwoArrs(vector<int> arrA, const vector<int> &arrB)
{
	int lastA = arrA.size() - 1;
	int lastB = arrB.size() - 1;
		
	while (lastA >= 0 || lastB >= 0) {

		while (arrB[lastB] < arrA[lastA]) {
			--lastA;
		}
	
		shift(arrA, arrB, lastA, lastB);
	}
}
