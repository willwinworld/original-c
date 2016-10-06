# include <stdio.h>

int main(void)
{   
    int number, counter, TriangularNumber;
	int calculateTriangularNumber (int upper);
	
	for (counter=1; counter<=5; ++counter)
	{
		printf("What triangular number do you want? ");
		scanf("%i", &number);
		TriangularNumber = calculateTriangularNumber(number);
		printf("Triangular number %i is %i\n\n", number, TriangularNumber);
	}
	
	return 0;
}

int calculateTriangularNumber(int upper)
{
	int n, triangularNumber = 0;
	
	for (n=1; n<=upper; ++n)
		triangularNumber += n;
		
	return triangularNumber;	
}
