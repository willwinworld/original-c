# include <stdio.h>

long int x_to_the_n(int x, int n)
{
	int i;
	long int result=1;
	
    for(i=1; i<=n; ++i)
    {
    	result *= x; // pure loop
	}
		
	return result;
}

int main(void)
{
	long int result;
	long int x_to_the_n(int x, int n);
	int xuser=2, nuser=0;
	
	result = x_to_the_n(xuser, nuser);
	printf("%i of %i integer power is %i", xuser, nuser, result);
	
	return 0;
}
