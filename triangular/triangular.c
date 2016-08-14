#include <stdio.h>
int main(void)
{
	int n, triandularNumber;
	
	triandularNumber = 0;
	for (n = 1; n <= 200; n = n + 1)
		triandularNumber += n;
	printf("the result is %i\n", triandularNumber);
	return 0;
}
