#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int p, d;
	bool isPrime;
	
	for (p = 1; p < 50; p += 2)
	{
		isPrime = true;
		for (d = 2; d < p; ++d)
		{
			if ( p % d == 0)
				isPrime = false;
		}
		
		if (p == 1)
			printf("\n");
		if (p == 2)
			printf("%i ", 2);
		else if(isPrime)
			printf("%i ", p);
	}
	
	return 0;
}

