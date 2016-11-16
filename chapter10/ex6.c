#include <stdio.h>

struct entry
{
	int value;
	struct entry *previous;
	struct entry *next;
};

void insertBefore(struct entry *insertion, struct entry *next)
{
	struct entry *previous = next->previous;  // 当next指针是指向n1 node的话，则next->previous就是n1 node的previous指针，而n1 node的previous指针是指向空指针的，这句话就说明previous指针也被设定为指向空指针了 
	
	if(previous != (struct entry *) 0)   // 上面分析的情况由于previous指针本身已经是空指针了,if语句下的语句就不会执行了... 因为下面的语句在if外面... 
	{
		previous->next = insertion;
	}
	
	next->previous = insertion;  // 直接开始执行这步，设定next的previous指针和insertion指针同时指向要插入的数据结构 
	
	insertion->previous = previous; // 设定previous指针和insertion的previous指针同时指向空指针 
	insertion->next = next;  // 设定next指针和insertion的next指针同时指向n1 node 
}

void insertAfter(struct entry *insertion, struct entry *previous)
{
	struct entry *next = previous->next;
	
	if(next != (struct entry *) 0)
	{
		next->previous = insertion;
	}
	
	previous->next = insertion;
	
	insertion->previous = previous;
	insertion->next = next;
}

void roundTrip(const struct entry *ptr)
{
	while(ptr->next != (struct entry *) 0)
	{
		printf("%i\n", ptr->value);
		ptr = ptr->next;
	}
	while(ptr->previous != (struct entry *) 0)
	{
		printf("%i\n", ptr->value);
		ptr = ptr->previous;
	}
	printf("%i\n\n", ptr->value);
}


int main(void)
{
	struct entry *nNull = (struct entry *) 0;
	
	struct entry n1 = {.value = 1, .previous = nNull};
	struct entry n2 = {.value = 2, .previous = &n1};
	struct entry n3 = {.value = 3, .previous = &n2};
	
	n1.next = &n2;
	n2.next = &n3;
	n3.next = nNull;
	
	roundTrip(&n1);
	
	struct entry n9 = {.value = 9};
	insertBefore(&n9, &n1);
	roundTrip(&n9);
	
//	struct entry n8 = {.value = 8};
//	insertAfter(&n8, &n3);
//	roundTrip(&n9);
	
	return 0;
}
