# include <stdio.h>

void gcd(int a, int b)
{
	int temp;
	
	printf("The gcd of %i and %i is ", a, b);
	
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	
	printf("%i\n", a);
}

int main(void)
{
	gcd(150, 35);
	gcd(1026, 405);
	gcd(83, 240);
	gcd(25, 15);
	return 0;
}
