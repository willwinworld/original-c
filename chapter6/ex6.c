# include <stdio.h>

int main(void)
{
	int F0, F1, F2, i, max;  // F1, F2 to store the previous Fibonacci, F3 to store the current
	
	F0 = 0;
	F1 = 1;
	
    printf("Input Fibonacci's max boundary: ");
    scanf("%i", &max);
    
    F2 = 0;
    for (i=0; i<max; i++)
	{
		F2 = F0 + F1;
		printf("%i  ", F2);
		F0 = F1;
		F1 = F2;
	}
	return 0;
}


