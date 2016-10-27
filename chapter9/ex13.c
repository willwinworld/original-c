#include <stdio.h>

void uppercase(char s[])
{
	int i;
		
	for(i=0; s[i] != '\0'; ++i)
	{
		if('a' <= s[i] && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}
}

int main(void)
{   
    char text[] = "All of these chArActers shOuld End uP in uPperCase!";

	printf ("text: %s\n", text);
	printf ("Converting to uppercase...\n");
	uppercase (text);
	printf ("text: %s\n", text);

	return 0;
}

