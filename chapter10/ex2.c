#include<stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

void insertEntry(struct entry *insertion, struct entry *previous)
{
	insertion->next = previous->next;  // ����previousָ��n2,��previous->next�ʹ���n2��nextָ�룬��n2��nextָ��֮ǰ��ָ��n3�ģ����Ը�ֵ�Ժ���൱�ڸ��ߵ��ԣ���������ݽṹ��nextָ��ָ��n3�� 
	previous->next = insertion;  // ��previous->next��ָn2��nextָ����ָ���²�������ݽṹ�� 
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
	struct entry x = {.value = 9};  // ��Ȼû��ָ��ָ�� 
	
	printEntries(listPtr);
	insertEntry(&x, &n2);
	printEntries(listPtr);
	
	return 0;
}
