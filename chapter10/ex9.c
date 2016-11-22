#include <stdio.h>
/*Post-increment(++) has higher precedence  */
void readLine(char buffer[])
{
	char character;
	int i = 0;
	
	do
	{
		character = getchar();
		buffer[i] = character;
		++i;
	}
	while(character != '\n');
	
	buffer[i - 1] = '\0';
}

void readLine_pointer_version(char *ptr)
{
	char character;
	ptr = &character;
	
	do
	{
		character = getchar();
		++ptr;
	}
	while(character != '\n');
	
	*ptr = '\0';
}
