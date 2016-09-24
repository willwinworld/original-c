# include <stdio.h>

int test(int n)
{
	int result;
	result = n*2;
	
	return result;
}

void main(void)
{
	int test(int n);
	int n=2;
	
	test(n);
	printf("after %i", n);
}
