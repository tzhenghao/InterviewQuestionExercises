#include <iostream>
#include <stack>
using namespace std;

int longestSubstringWithMatchingParens(const char *s) {

	int i = 0;

	Stack <int> st;

	int end = 0;
	int maxSoFar = 0;

	while (s[i] != '\0') {

		if (s[i] == '(') {

			st.push(i);
		}
		else {

			if (st.empty()) {

				end = i + 1;
			}
			else {
				st.pop();

				int start = st.empty()? end - 1: st.top();

				maxSoFar = max(maxSoFar, i - start);
			}
		}
	}
}
