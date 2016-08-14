#include <stdio.h>
int main(void)
{
	int i, j;
	int Next_multiple = i + j - i % j;
	
	i = 365, j = 7;
	printf("Next_multiple is %i\n", i + j - i % j);
	
	i = 12258, j = 23;
	printf("Next_multiple is %i\n", i + j - i % j);
	
	i = 996, j = 4;
	printf("Next_multiple is %i\n", i + j - i % j);
	return 0;
}


