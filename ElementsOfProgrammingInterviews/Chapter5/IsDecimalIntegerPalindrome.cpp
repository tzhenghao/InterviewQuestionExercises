#include <iostream>
using namespace std;

bool isDecimalIntegerPalindrome(int num) {

	int temp = num;

	int numDigits = 0;

	while(temp) {
		++numDigits;
		temp /= 10;
	}

	temp = num;

	int i = 0;
	while (i < numDigits/2) {

		int front = num / pow(10, --numDigits);
		int remainder = temp % 10;

		if (front != remainder) {
			return false;
		}

		temp /= 10;
		++i;
	}

	return true;
}
