# include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

struct abbreviate
{   
	char name[3];
};

const struct abbreviate shorts[7] = 
{
	{'M', 'o', 'n'}, {'T', 'u', 'e'},
	{'W', 'e', 'd'}, {'T', 'h', 'u'},
	{'F', 'r', 'i'}, {'S', 'a', 't'},
	{'S', 'u', 'n'}
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
	int N, i;
	struct date specific;
	
	printf("Enter date (mm dd yyyy): ");
	scanf("%i%i%i", &specific.month, &specific.day, &specific.year);
	
	N = calculateN(specific);
	i = (N - 621049) % 7;
	printf("%i\n", i);
	
	printf("%c%c%c\n", shorts[i-1].name[0], shorts[i-1].name[1], shorts[i-1].name[2]);
	
	return 0;
}
