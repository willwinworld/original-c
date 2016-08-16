#include <stdio.h>
int main(void)
{
	int n, triangularNumber;
		
	triangularNumber = 0;
	printf("Every fifth triangular numbers between 5 and 50\n");
	printf("---   -----------\n");
	for(n=5; n <= 10; ++n)
    {
		triangularNumber = n * (n + 1) / 2;
		printf(" %2i     %i\n", n, triangularNumber);
	}
		return 0;
}
