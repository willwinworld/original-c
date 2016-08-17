#include <stdio.h>

int main(void)
{
	int n = 1, triangularNumber;
	
	triangularNumber = 0;
	while(n <= 200)
	{
		triangularNumber += n;
		n += 1;
	}
	printf("The 200th triangular number is %i\n", triangularNumber);
	
	return 0;
}
