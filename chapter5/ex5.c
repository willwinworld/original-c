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
			printf("%i", right_digit);
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
			printf("%i", right_digit);
			real_number = real_number / 10;
		}
	    while ( real_number != 0);
        }
		
	printf("\n");
	
	return 0;
}
