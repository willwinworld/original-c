#include <stdio.h>
int main(void)
{
	int amount = 100; // ����һ����ֵ�Ͳ������¸�ֵ�������ô�д��ĸ��ʾ 
	int price = 0;
	
	printf("��������:");
	scanf("%d", &price);
	
	printf("������Ʊֵ:");
	scanf("%d", &amount);
	
	int change = amount - price;
	
	printf("����%dԪ��\n", change);
	
	return 0;
}
