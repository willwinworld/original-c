# include <stdio.h>

int convertedNumber[64];
long int numberToConvert;
int base;
int digit = 0;

void getNumberAndBase (void)
{
	printf("Number to be converted? ");
	scanf("%li", &numberToConvert);
	
    do
    {
    	printf("Enter base value between 2 and 16: ");
    	scanf("%i", &base);
	}
	while(base < 2 || base > 16)
}

