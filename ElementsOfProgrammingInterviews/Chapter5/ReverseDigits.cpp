#include <iostream>
using namespace std;

int reverseDigits(int num) {

	bool isNegative = (num < 0) ? 1 : 0;

	int temp = abs(num);
	int result = 0;

	while (temp) {

		result = (result * 10) + (temp % 10);
		temp /= 10;
	}

	if (isNegative) {
		return -1 * result;
	}
	else {
		return result;
	}
}
