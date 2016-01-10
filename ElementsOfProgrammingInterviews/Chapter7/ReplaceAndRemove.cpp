#include <iostream>
#include <string>

using namespace std;

void replaceAndRemove(sting *str) {

	int i = 0;

	int countChars = 0;
	int countAs = 0;

	while (str[i] != '\0') {

		if (str[i] != 'b') {
			str[countChars++] = str[i];
		}

		if (str[i] == 'a') {
			++countAs;
		}

		++i;
	}

	str.resize(countAs + countChars);

	int currentIndex = countChars - 1;
	countChars = str.size() - 1;

	while (currentIndex >= 0) {

		if (str[currentIndex] == 'a') {
			str[countChars--] = 'd';
			str[countChars--] = 'd';
		}
		else {
			str[countChars--] = str[currentIndex];
		}
	}
}
