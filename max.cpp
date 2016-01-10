#include <iostream>

using namespace std;


int max(int num1, int num2) {

	int temp = num1-num2;
	
	int pos = (temp << 31) & 0x1;

	int neg = 1 ^ pos;

	return pos * num2 + neg * num1;
}
