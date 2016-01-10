#include <iostream>
#include <vector>

using namespace std;

void incrementBigInteger(vector<int> &a) {

	int i = a.size() - 1;

	int carry = (a[i] + 1) / 10;
	a[i] = (a[i] + 1) % 10;

	while(i >= 0) {

		a[i] = (a[i] + carry) % 10;
		carry = a[i] / 10;

		--i;
	}
}
