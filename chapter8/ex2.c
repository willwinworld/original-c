# include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

int calculateN (struct date random)
{
	int N, f, g;
	if (random.month <= 2)
	{
		f = random.year - 1;
	}
	else
	{
		f = random.year;
	}
		
	if (random.month <= 2)
	{
		g = random.month + 13;
	}
	else
	{
		g = random.month + 1;
	}
	
	if (random.year >= 1900 && random.month >= 3 && random.day > 1)
	{
	    N = 1461 * f / 4 + 153 * g / 5 + random.day;
    }
    else if ((random.year >= 1800 && random.month >= 3 && random.day > 1) && (random.year <= 1900 && random.month <= 2 && random.day < 28))
    {
 	    N = 1461 * f / 4 + 153 * g / 5 + random.day + 1;   	
	}
	else
	{
		N = 1461 * f / 4 + 153 * g / 5 + random.day + 2;
	}
	
	return N;
}

int main(void)
{   
    int calculateN (struct date random);
    int interval, N1, N2;
    struct date specific1, specific2;
    
	printf("Enter a small date (mm dd yyyy): ");
	scanf("%i%i%i", &specific1.month, &specific1.day, &specific1.year);
	
	printf("Enter another larger date (mm dd yyyy): ");
	scanf("%i%i%i", &specific2.month, &specific2.day, &specific2.year);
	
	N1 = calculateN(specific1);
	N2 = calculateN(specific2);
	interval = N2 - N1;
	
	printf("The interval between two dates is: %i\n", interval);
	
	return 0;
}


