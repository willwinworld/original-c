#include <stdio.h>

int main(void)
{
	int number, right_digit;
	int real_number;
	
	real_number = 0;
	printf("Enter your number.\n");
	scanf("%i", &number);
	
	if ( number > 0 )
	    {
		real_number = number;
		do
		{   
			right_digit = real_number % 10;
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
			real_number = real_number / 10;
		}
		while ( real_number != 0);
		} 
		
	else if ( number < 0 )
	    {
		real_number = - number;
		printf("%c", '-');
		do
		{   
			right_digit = real_number % 10;
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
			real_number = real_number / 10;
		}
	    while ( real_number != 0);
        }
        
    else
    {
    	printf("zero\n");
	}
		
	printf("\n");
	
	return 0;
}
