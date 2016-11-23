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
		*ptr++ = character;  // �Ѿ�ȡ������'\n',ָ����ָ����Ǹ���ַ��������õ�ֵҲ����Ϊ'\0' 
	}
	while(character != '\n');  // �ж�character == '\0',����ѭ�� 
	
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
				lookingForward = false;  //  lookingForwarc�൱��һ��ȫ�ֱ�������for�����ǻ᲻�ϱ仯�� 
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
