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

void removeString(char text[], int index, int rm_length)
{
	int i;
	
	for(i=0; i<index; ++i)
		if(text[i] == '\0')  // 要删除的位置在整个字符串的后面 
			return;  // 直接退出, 还有个目的，使i到达index位置 
			
	for(; i<index+rm_length; ++i)  // 由于i此时已经到达index, 所以并不用设置初始值了 
		if(text[i] == '\0')  //　遍历要删除的字符的开始到结束,这个函数的意思是说不能出现要删除的字符长度跨越了原字符的结尾处，也就是说一部分在原字符，一部分已经超过原字符了 
		{
			text[index] = '\0';  // 同时把要删除的字符入口处赋值为结束符 
			return;	
		} 
    
    do
    {
    	text[i - rm_length] = text[i];  // 第三种情况，要删除的字符开始结束都在字符内部,此时i等于要删除的字符串的结尾处 
	}
	while(text[i++] != '\0');
}

int stringLength(const char string[])
{
	int count = 0;
	
	while(string[count] != '\0')
		++count;
		
	return count;
}

void insertString(char source[], const char s[], int i)
{   
    
	int j, lenS, lenSource;
	int stringLength(const char string[]);
	
	lenSource = stringLength(source);
	lenS = stringLength(s);
	
	if(i > lenSource)
		return;
		
	for(j = lenSource; j >= i; --j)  // 挪位置 
		source[lenS + j] = source[j];
	
	for(j=0; j < lenS; ++j)
		source[j+i] = s[j];
		
	printf("%s\n", source);
}

void replaceString(char text[], const char s1[], const char s2[])
{
	int index = findString(text, s1);
	
	if(index >= 0)
	{
		int rm_length = stringLength(s1);
		removeString(text, index, rm_length);
	    insertString(text, s2, index);
	}
}

int main (void)
{
	char text1[] = "just *1 hit";

	printf ("text1: %s\n\n", text1);

	printf ("replaceString (text1, \"1\", \"one\");\n");
	replaceString (text1, "1", "one");
	printf ("text1: %s\n\n", text1);

	printf ("replaceString (text1, \"*\", \"\");\n");
	replaceString (text1, "*", "");
	printf ("text1: %s\n", text1);

	return 0;
}
