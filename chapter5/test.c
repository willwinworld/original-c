#include <stdio.h>
int main(void)
{
	int a, b;
	printf("Please type in two integers: ");
	scanf("%i %i", a, b);  // scanf����û��&����ɱ������ 
	 
	if(a % b == 0)
		printf("first is evenly divisible by the second");
	else
		printf("first is not evenly divisible by the second");
		
	return 0;
}
