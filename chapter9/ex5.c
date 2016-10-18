#include <stdio.h>
#include <stdbool.h>

int findString(const char source[], const char s[])
{
	int i, j, foundit = false;
	
	for(i = 0; source[i] != '\0' && !foundit; ++i)
	{
		foundit = true;
		
		for(j = 0; s[j] != '\0' && foundit; ++j)
		{
			if(source[j+i] != s[j] || source[j+i] == '\0')
				foundit = false;
		}
		
		if(foundit)
			return i;
	}
	
	return -1;
}

int main(void)
{
	int findString(const char source[], const char s[]);
	int index;
	index = findString("a chatterbox", "hat");
	printf("%i", index);
	
	return 0;
}
