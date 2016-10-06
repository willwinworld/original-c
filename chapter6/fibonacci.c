# include <stdio.h>

int main(void)
{
	int i, numFibs;
	
	printf("Input the numFibs: ");
	scanf("%i", &numFibs);
	
	if (numFibs < 1 || numFibs > 75)
	{
		printf("wrong range of numFibs");
		return 1;
	}
	
	unsigned long long Fibonacci[numFibs];
	Fibonacci[0] = 0;
	Fibonacci[1] = 1;
	
	for (i=2; i<numFibs; i++)
	{
		Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
	}
	
	for (i=0; i<numFibs; i++)
	{
		printf("%llu  ", Fibonacci[i]);
	}
	return 0;
}

