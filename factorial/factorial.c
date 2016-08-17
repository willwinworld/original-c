#include <stdio.h>
int main(void)
{   
    int n, factorial;
    
	factorial = 1;
	printf("Table of the first 10 factorials\n");
	printf("-----     ----------------------\n");
	printf("  n           factorial\n");
	for(n=1; n<=10; ++n)
	{
		factorial *= n;
		printf(" %2i           %i\n", n,  factorial);
	}
	return 0;
}
