#include <iostream>
#include <stack>

using namespace std;

void printKeysInBST(Node *node) {

	Stack <int> traverse;

	Node* current = node;

	while (!traverse.empty() || current) {

		if (current) {

			traverse.push(current->data);
			current = current->left;
		}
		else {
			current = traverse.top();
			traverse.pop();

			cout << current << "\n";

			current = current->right;
		}
	}
}
