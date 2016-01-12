#include <iostream>
#include <stack>

using namespace std;

class MyStack {

	private:

		Stack <int> s;

		Stack <int> maxSoFar;

	public:

		void pop();

		void push(int num);

		int top() const;

		int max() const;
};

// REQUIRES: The stack to be non-empty.
void MyStack::pop() {

	if (maxSoFar.top() == s.top()) {

		maxSoFar.pop();
	}

	s.pop();
}

void MyStack::push(int num) {

	if (num >= maxSoFar.top() || maxSoFar.empty()) {
		maxSoFar.push(num);
	}

	s.push(num);
}

int MyStack::top() const {

	return s.top();
}

int MyStack::max() const {

	return maxSoFar.top();
}
