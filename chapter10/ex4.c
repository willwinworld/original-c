#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

void removeEntry(struct entry *previous)
{
	if(previous->next != (struct entry *) 0){
		previous->next = previous->next->next;
	}
}

void printEntry(struct entry listHead)
{
	struct entry *ptr;
	
	ptr = listHead.next;  // struct entry *ptr = listHead.next;
	while(ptr != (struct entry *) 0){
		printf("%i\n", ptr->value);
		ptr = ptr->next;
	} 
}

int main(void)
{
	struct entry n3 = {.value = 3, .next = (struct entry *) 0};
	struct entry n2 = {.value = 2, .next = &n3};
	struct entry n1 = {.value = 1, .next = &n2};
	
	struct entry head = {.next = &n1};
	
	printEntry(head);
	removeEntry(&head);
	printEntry(head);
	
	return 0;
}
