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
		if(text[i] == '\0')  // Ҫɾ����λ���������ַ����ĺ��� 
			return;  // ֱ���˳�, ���и�Ŀ�ģ�ʹi����indexλ�� 
			
	for(; i<index+rm_length; ++i)  // ����i��ʱ�Ѿ�����index, ���Բ��������ó�ʼֵ�� 
		if(text[i] == '\0')  //������Ҫɾ�����ַ��Ŀ�ʼ������,�����������˼��˵���ܳ���Ҫɾ�����ַ����ȿ�Խ��ԭ�ַ��Ľ�β����Ҳ����˵һ������ԭ�ַ���һ�����Ѿ�����ԭ�ַ��� 
		{
			text[index] = '\0';  // ͬʱ��Ҫɾ�����ַ���ڴ���ֵΪ������ 
			return;	
		} 
    
    do
    {
    	text[i - rm_length] = text[i];  // �����������Ҫɾ�����ַ���ʼ���������ַ��ڲ�,��ʱi����Ҫɾ�����ַ����Ľ�β�� 
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
		
	for(j = lenSource; j >= i; --j)  // Ųλ�� 
		source[lenS + j] = source[j];
	
	for(j=0; j < lenS; ++j)
		source[j+i] = s[j];
		
}

bool replaceString(char text[], const char s1[], const char s2[])
{
	int index = findString(text, s1);
	
	if(index >= 0)
	{
		int rm_length = stringLength(s1);
		removeString(text, index, rm_length);
	    insertString(text, s2, index);
	    return true;
	}
	else
	{
		return false;
	}
}

int main (void)
{
	char text[50] = "  this and  that or    these and those  ";

	printf ("text: %s\n\n", text);

	printf ("Removing spaces...\n");
	while ( replaceString (text, " ", "") );  // �����whileѭ�����ǿ����飬���ֺţ���replaceString����ֵΪfalseʱ�˳�ѭ�� 
	
	printf ("text: %s\n", text);

	return 0;
}