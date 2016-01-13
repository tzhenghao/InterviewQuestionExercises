#include <iostream>
#include <queue>

void levelOrderTraversal(Node *node) {

	Node *curr = node;

	queue<int>q;

	q.enqueue(curr->data);

	int count = q.size();

	while (!q.empty()) {

		if (curr->left) {
			q.enqueue(curr->left->data);
		}

		if (curr->right) {
			q.enqueue(curr->right->data);
		}

		cout << q.top() << " ";

		q.dequeue();

		if (--count == 0) {
			cout << "\n";
			count = q.size();
		}
	}
}
