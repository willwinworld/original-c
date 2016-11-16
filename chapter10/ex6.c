#include <stdio.h>

struct entry
{
	int value;
	struct entry *previous;
	struct entry *next;
};

void insertBefore(struct entry *insertion, struct entry *next)
{
	struct entry *previous = next->previous;  // ��nextָ����ָ��n1 node�Ļ�����next->previous����n1 node��previousָ�룬��n1 node��previousָ����ָ���ָ��ģ���仰��˵��previousָ��Ҳ���趨Ϊָ���ָ���� 
	
	if(previous != (struct entry *) 0)   // ����������������previousָ�뱾���Ѿ��ǿ�ָ����,if����µ����Ͳ���ִ����... ��Ϊ����������if����... 
	{
		previous->next = insertion;
	}
	
	next->previous = insertion;  // ֱ�ӿ�ʼִ���ⲽ���趨next��previousָ���insertionָ��ͬʱָ��Ҫ��������ݽṹ 
	
	insertion->previous = previous; // �趨previousָ���insertion��previousָ��ͬʱָ���ָ�� 
	insertion->next = next;  // �趨nextָ���insertion��nextָ��ͬʱָ��n1 node 
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
