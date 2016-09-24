# include <stdio.h>

int prime(int number)
{
	int counter=0, temp, i;
	
	for(i=2; i<number; ++i)  // begin the loop from i=2,not from zero
	{
		temp = number % i;
		if (temp == 0)
		{
			++counter;
		}
	}
	
	if (counter==0)
	{
		printf("The number is a prime number.\n");
		return 0;
	}
	else
	{
		printf("The number is not a prime number.\n");
		return 1;
	}
}

int main(void)
{
	int prime(int number);
	int number;
	
	printf("Input a number: ");
	scanf("%i", &number);
	
	prime(number);
	
	return 0;
}
