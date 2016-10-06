# include <stdio.h>
# include <stdlib.h>

int gconvertedNumber[];
long long int gnumberToConvert;
int gbase;
int gdigit = 0;

void getNumberAndBase (void)
{   
    printf("Number to be converted? ");
    scanf("%lli", &gnumberToConvert);
    if (gnumberToConvert == 0)
    {
    	exit(0);
	}
	
    do
    {
    	printf("Enter base value between 2 and 16: ");
    	scanf("%i", &gbase);
	}
	while(gbase < 2 || gbase > 16)
}

void convertNumber(void)
{
	do
	{
		gconvertedNumber[gdigit] = gnumberToConvert % gbase;
		++gdigit;
		gnumberToConvert /= gbase;
	}
	while (gnumberToConvert != 0);
}
