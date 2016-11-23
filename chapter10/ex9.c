#include <stdio.h>
#include <stdbool.h>
/*Post-increment(++) has higher precedence  */
bool alphabetic(const char c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return true;
	else
		return false;
}

void readLine(char *ptr)
{
	char character;
	
	do
	{
		character = getchar();
		*ptr++ = character;  // 已经取出来是'\n',指针所指向的那个地址所间接引用的值也被赋为'\0' 
	}
	while(character != '\n');  // 判断character == '\0',跳出循环 
	
	*ptr-- = '\0'; 
}

int countWords(const char string[])
{
	int i, wordCount = 0;
	bool lookingForward = true;
	
	for(i = 0; string[i] != '\0'; i++)
	{
		if(alphabetic(string[i]))
		{
			if(lookingForward)
			{
				wordCount++;
				lookingForward = false;  //  lookingForwarc相当于一个全局变量，在for里面是会不断变化的 
			}
		}
		else
		{
			lookingForward = true;
		}
	}
	
	return wordCount;
}

int main(void)
{
	char text[81];
	int totalWords = 0;
	int countWords(const char string[]);
	void readLine(char *ptr);
	bool endOfText = false;
	
	printf("Type in your text.\n");
	printf("When you are done, press 'RETURN'.\n\n");
	
	while(!endOfText)
	{   
	    readLine(text);
		if(text[0] == '\0')
		{
			endOfText = true;
		}
		else
		{
			totalWords += countWords(text);
		}
	}
	
	printf("\nThere are %i words in the above text.\n", totalWords);
	
	return 0;
}
