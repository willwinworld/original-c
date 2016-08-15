#include <stdio.h>
int main(void)
{
	int number, right_digit;

	printf("please enter a integer:");
	scanf("%i", &number);

	while(number != 0)
	{
		right_digit = number % 10;
		number = number / 10;
		printf("%i", right_digit);
	}
	return 0;		
}
