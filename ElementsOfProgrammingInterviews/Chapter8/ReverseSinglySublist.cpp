#include <iostream>
#include <vector>

using namespace std;

void reverseSinglySublist(List *list, int start, int end) {

	List *current = list;
	int i = 1;

	while (i < start - 1) {
		current = current->next;
		++i;
	}

	List *prevStart = current;
	List *start = current->next;

	current = current->next;

	while (count < end) {

		List *endPtr = current->next;
		lastEndPtr = endPtr->next;

		current->next = prev;
		prev = current;
		current = endPtr;

		++count;
	}
	endPtr->next = prev;
	start->next = lastEndPtr;

	if (prevStart) {
		prevStart->next = f_ptr;
	}

	return list;
}
