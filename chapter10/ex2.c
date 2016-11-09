#include<stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

void insertEntry(struct entry *insertion, struct entry *previous)
{
	insertion->next = previous->next;  // 假设previous指向n2,则previous->next就代表n2的next指针，而n2的next指针之前是指向n3的，所以赋值以后就相当于告诉电脑，插入的数据结构的next指针指向n3了 
	previous->next = insertion;  // 而previous->next即指n2的next指针是指向新插入的数据结构的 
}

void printEntries(struct entry *ptr)
{
	while(ptr != (struct entry *) 0){
		printf("%i\n", ptr->value);
		ptr = ptr->next;
	}
}

int main(void)
{
	struct entry *listPtr;
	struct entry n3 = {.value=3, .next=(struct entry *) 0};
	struct entry n2 = {.value=2, .next=&n3};
	struct entry n1 = {.value=1, .next=&n2};
	listPtr = &n1;
	struct entry x = {.value = 9};  // 竟然没有指定指针 
	
	printEntries(listPtr);
	insertEntry(&x, &n2);
	printEntries(listPtr);
	
	return 0;
}
