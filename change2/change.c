#include <stdio.h>
int main(void)
{
	int amount = 100; // 常量一旦赋值就不能重新赋值，常量用大写字母表示 
	int price = 0;
	
	printf("请输入金额:");
	scanf("%d", &price);
	
	printf("请输入票值:");
	scanf("%d", &amount);
	
	int change = amount - price;
	
	printf("找您%d元。\n", change);
	
	return 0;
}
