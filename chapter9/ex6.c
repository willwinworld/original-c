#include <stdio.h>

void removeString(const char text[], const int start, const int del, char res[])
{
	int i, j;
	
	for(i=0; i<start && text[i] != '\0'; ++i)
	{
		res[i] = text[i];
	}
	
	for(j=start; j<start+del && text[j] != '\0'; ++j)
	{
		res[j] = text[j];
	}
	
}

int main(void)
{
	void removeString(const char text[], const int start, const int del, char res[]);
	char res[32];
	
	removeString("the wrong son", 4, 6, res);
	printf("%s\n", res);
	
	return 0;
}
