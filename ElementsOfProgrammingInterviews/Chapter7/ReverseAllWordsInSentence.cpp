#include <iostream>
#include <string>

using namespace std;

void reverseAllWordsInSentence(string *str) {

	int i = 0;
	string result = "";
	while (str[i] != '\0') {

		string temp = "";

		while (str[i] != ' ' && str[i] != '\0') {

			temp += str[i];
			++i;
		}

		result.insert(temp, 0);
	}

	*str = result;
}
