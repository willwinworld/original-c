# include <stdio.h>

int main (void)
{
	int value1, value2, sum;  // new way to initialize multivariables
	
	value1 = 50;
	value2 = 25;
	sum = value1 + value2;
	printf("The sum of %i and %i is %i\n", value1, value2, sum);
	
	return 0;
}
