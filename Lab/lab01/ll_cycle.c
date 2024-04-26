#include <stddef.h>
#include<stdbool.h>
#include "ll_cycle.h"

bool ll_has_cycle(node *head) {
	node *fast = head, *slow = head;
	while (fast != NULL && fast->next != NULL){
		fast = fast->next->next;	
		slow = slow->next;
		if(fast == slow) return true;
	}	/* your code here */
	return false;
    return 0;
}
