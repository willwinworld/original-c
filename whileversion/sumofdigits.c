#include <stdio.h>
int main(void)
{
	int number, right_digit, sum;
	
	printf("Enter your number: ");
	scanf("%i", &number);
	
	sum = 0;
	while(number != 0)
    {
    	right_digit = number % 10;
    	sum += right_digit;
    	number = number / 10;
	}
	printf("The sum of the digits of the number is %i", sum);
	
	return 0;
}
