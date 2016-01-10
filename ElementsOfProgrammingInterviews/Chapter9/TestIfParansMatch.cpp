#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isParansMatch(string &str) {

	stack<char> s;

	int i = 0;

	while (str[i] != '\0') {

		if (str[i] == '[' || str[i] == '(' || str[i] == '{') {
			s.push(str[i]);
		}
		else if (!s.empty()) {

			if (s.top() == '[' && str[i] == ']') {
				s.pop();
			}
			else if (s.top() == '{' && str[i] == '}') {
				s.pop();
			}
			else if (s.top() == '(' && str[i] == ')') {
				s.pop();
			}
			else if (str[i] == ']' || str[i] == ')' || str[i] == '}') {
				return false;
			}
		}
		else {

			if (str[i] == ']' || str[i] == ')' || str[i] == '}') {
				return false;
			}
		}

		++i;
	}

	return true;
}
