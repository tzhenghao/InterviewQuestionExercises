#include <iostream>

using namespace std;

void removeDuplicatesFromSortedList(List *list) {

	List *current = list;
	List *prev = nullptr;

	while (current) {

		if (current->datum == prev->datum) {

			List *temp = current->next;
			delete current;
			prev->next = temp;
			current = temp;
		}
		else {
			prev = current;
			current = current->next;
		}
	}
}
