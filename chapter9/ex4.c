#include <stdio.h>

void substring(const char source[], int start, int count, char result[])
{
	int i = 0;
	for (start; start < start + count && source[start] != '\0'; ++start)
	{
		result[i] = source[start];
		++i;
	}
	result[start + count] = '\0';
}

int main(void)
{
	char result[32];
	
	substring("character", 4, 3, result);
	printf("%s\n", result);
	
	substring("two words", 4, 20, result);
	printf("%s\n", result);
	
	return 0;
}
