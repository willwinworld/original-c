#include <stdio.h>

int stringLength(char string[])
{
	int count = 0;
	
	while(string[count] != '\0')
		++count;
		
	return count;
}

void insertString(char source[], char s[], int i)
{   
    
	int j, lenS, lenSource;
	int stringLength(char string[]);
	
	lenSource = stringLength(source);
	lenS = stringLength(s);
	
	if(i > lenSource)
		return;
		
	for(j = lenSource; j >= i; --j)  // Ųλ�� 
		source[lenS + j] = source[j];
	
	for(j=0; j < lenS; ++j)
		source[j+i] = s[j];
		
	printf("%s\n", source);
}

int main(void)
{
	void insertString(char source[], char s[], int i);
//	char source[] = "the wrong son";  
//	insertString(source, "per", 10);
	
//	char source[]; 
//	insertString(source="the wrong son", "per", 10);  // ���ݵ����ڴ��ַ 
//	insertString("the wrong son", "per", 10);  // �ַ����������ڴ�����Ψһ�ģ��ǲ������޸ĵ�
//  ���Դ���ȥ���������޸ģ�����per���Դ���ȥ����the wrong son����ȥ��ᱻ�޸ģ����Իᱨ�� 
 
	return 0;
}
