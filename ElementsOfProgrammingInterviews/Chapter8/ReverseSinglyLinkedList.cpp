#include <iostream>
#include <vector>

using namespace std;

void reverseSinglyLinkedList(List *head, List *result) {

	List *currHead = head;

	List *current = head->next;

	result = currHead;
	result->next = NULL;

	while (current != NULL) {

		currHead = current;
		currHead->next = result;
		current = current->next;
	}
}
