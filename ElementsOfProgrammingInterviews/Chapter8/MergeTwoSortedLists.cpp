#include <iostream>

void mergeTwoLists(List *list1, List *list2, List *mergeList) {

	List *current1 = list1;
	List *current2 = list2;
	List *mergelistptr = mergeList;

	while (current1 != NULL && current2 != NULL) {

		if (current1->data <= current2->data) {
			mergelistptr = current1;
			current1 = current1->next;
		}
		else	
			mergelistptr = current2;
			current2 = current2->next;
		}

		mergelistptr->next = NULL;
		mergelistptr = mergelistptr->next;
	}

	if (current1 != NULL) {
		
		while (current1) {
			mergelistptr = current1;
			current1 = current1->next;
			mergelistptr->next = NULL;
			mergelistptr = mergelistptr->next;
		}
	}

	if (current2 != NULL) {
		
		while (current2) {
			mergelistptr = current2;
			current2 = current2->next;
			mergelistptr->next = NULL;
			mergelistptr = mergelistptr->next;
		}
	}
}
