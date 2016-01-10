#include <iostream>
using namespace std;

void deleteKthLastElement(List *list, int k) {

	List *trailingPtr = list;
	List *runner = list;

	int i = 1;

	while (i < k) {
		runner = runner->next;
		++i;
	}

	while (runner) {
		runner = runner->next;
		trailingPtr = trailingPtr->next;
	}

	List *temp = trailingPtr->next->next;
	delete trailingPtr->next;
	trailingPtr->next = temp;
}
