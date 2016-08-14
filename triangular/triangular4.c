#include <stdio.h>
int main(void)
{
	int n, number, counter, triangularNumber;
	
	for(counter=0; counter<=5; ++counter)
	{
		printf("what triangular number do you want?");
	    scanf("%i", &number);
	    
	    triangularNumber = 0;
	    
	    for(n=1; n<=number; ++n)
	    	triangularNumber += n;
	    	
	    printf("Triangular number %i is %i\n\n", number, triangularNumber);
		
	}
	return 0;
}
