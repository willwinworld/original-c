#include <stdio.h>

int main(void)
{
	int number, right_digit;
	
	printf("Type in your number.\n");
	scanf("%i", &number);
	if ( number == 0)
		{
			printf("zero\n");	
		}
	else
	{
	    do
	    {
	    	right_digit = number % 10;
	    	switch (right_digit)
	    	{
	    		case 0:
					printf("zero ");
					break;
				case 1:
					printf("one ");
					break;
				case 2:
					printf("two ");
					break;
				case 3:
					printf("three ");
					break;
				case 4:
					printf("four ");
					break;
				case 5:
					printf("five ");
					break;
				case 6:
					printf("six ");
					break;
				case 7:
					printf("seven ");
					break;
				case 8:
					printf("eight ");
					break;
				case 9:
					printf("nine ");
					break;	
			}
	    	number = number / 10;
		}
		while ( number != 0);
	}
     
	return 0;
}


