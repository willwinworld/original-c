#include <stdio.h>

char uppercase(char s)
{
	char upperletter = s - 'a' + 'A';
	return upperletter;
}

int main(void)
{
	printf("%c\n", uppercase('b'));
	
	return 0;
}
