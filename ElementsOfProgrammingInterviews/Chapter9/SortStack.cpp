#include <stack>

using namespace std;

void sort(Stack <int> &s) {


	if (!s.empty()) {

		int temp = s.top();

		s.pop();

		sort(s);

		insert(temp, s);

	}
}

void insert(int num, stack <int> &s) {


	if (s.empty() || s.top() <= num) {

		s.push(num);
	}
	else {

		int temp = s.top();
		s.pop();
		s.push(num);
		s.push(temp);
	}
}
