#include <stdio.h>

int absValue(int intValue)
{
	if(intValue < 0)
	{
		intValue *= -1;
	}
	
	return intValue;
}

void intToStr(int intValue, char intString[])
{
	int magnitude = absValue(intValue), sign, i, n;
	
	if(intValue < 0)
	{
		sign = -1;
		i = 1;
		intString[0] = '-';
	}
	else
	{
		sign = 1;
		i = 0;
	}
	
	while(magnitude / 10 > 0)  // 在算整数如果换成字符型的长度 
	{
		++i;
		magnitude /= 10;
	}
	intString[i+1] = '\0';
	
	magnitude = absValue(intValue);
	for(n = (sign < 0) ? 1 : 0; i >= n; --i)
	{
		intString[i] = (magnitude % 10) + '0';
		magnitude /= 10;
	}
}

int main(void)
{
	char intString[20];
	int intValue;
	
	for(intValue = 321; intValue > -321; intValue -= 87)
	{
		printf("%i\n", intValue);
		intToStr(intValue, intString);
		printf("\"%s\"\n\n", intString);
	}
	
	return 0;
}
