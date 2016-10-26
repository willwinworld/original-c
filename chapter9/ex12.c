#include <stdio.h>
#include <math.h>

int findDot(char s[])
{
	int i;
	for(i=0; s[i] != '\0'; ++i)
	{
		if(s[i] == '.')
		{
			return i;
		}
	}
}

float strtoFloat(char s[])
{
	int i = 0, j, intValue, intResult = 0, floatResult = 0, sign = 1, dotIndex;
	float finalResult;
	
	if(s[0] == '-')
	{
		++i;
		sign *= -1;
	}
	
    dotIndex = findDot(s);
//    printf("%i\n", dotIndex);
    
    for(; i<dotIndex && s[i] >= '0' && s[i] <= '9'; ++i)
    {
    	intValue = s[i] - '0';
    	intResult = intResult * 10 + intValue;
	}
	
	for(j=dotIndex+1; s[j] >= '0' && s[j] <= '9'; ++j)
	{   
		intValue = s[j] - '0';
		floatResult = floatResult * 10 + intValue; 
	}
    
	finalResult = (float) intResult + ((float) floatResult / pow(10, j - dotIndex - 1));
	return sign * finalResult;
}

int main(void)
{
	char s[] = "-867.6912";
	printf("%9.4f\n", strtoFloat(s));
	
	return 0;
}
