#include <iostream>
using namespace std;

int findGreatestCommonDivisor(int num1, int num2) {

	if (num2 == 0) {
		return num1;
	}
	else if (num1 == 0) {
		return num2;
	}
	else if (!(num1 & 1) && !(num2 & 1)) {
		return findGreatestCommonDivisor(num1 >> 1, num2 >> 1) << 1;
	}
	else if (!(num1 & 1) && (num2 & 1)) {
		return findGreatestCommonDivisor(num1 >> 1, num2);
	}
	else if ((num1 & 1) && !(num2 & 1)) {
		return findGreatestCommonDivisor(num1, num2 >> 1);
	}
	else if ((num1 & 1) && (num2 & 1) && num1 > num2) {
		return findGreatestCommonDivisor(num1-num2, num2);
	}
	else {
		return findGreatestCommonDivisor(num1, num2-num1);
	}
}
