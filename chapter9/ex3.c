# include <stdio.h>
# include <stdbool.h>

bool wordchar (const char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == '\''))
		return true;
	else
		return false;	
}

bool  numchar (const char  c)  
{  
  
    if ( (c >= '0' && c <= '9') || c == '.' || c == ',' || c == '-' )  
       return  true;  
    else  
       return  false;  
}  

int countWords (const char string[])
{
	int i, wordCount = 0;
	bool lookingForWord = true, wordchar (const char c), numchar (const char c);
	
	for (i=0; string[i] != '\0'; ++i)
	{
		if (wordchar (string[i]) || numchar (string[i]))
		{
			if (lookingForWord)
			{
				++wordCount;
				lookingForWord = false;
			}
		}
		else
			lookingForWord = true;
	}
	
	return wordCount;
}

int main(void)
{
	const char text1[] = "I'am";
	const char text2[] = "-123.,45";
	int countWords (const char string[]);
	
	printf("%s - words = %i\n", text1, countWords(text1));
	printf("%s - words = %i\n", text2, countWords(text2));
	
	return 0;
}
