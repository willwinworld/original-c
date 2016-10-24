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
		
	for(j = lenSource; j >= i; --j)  // 挪位置 
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
//	insertString(source="the wrong son", "per", 10);  // 传递的是内存地址 
//	insertString("the wrong son", "per", 10);  // 字符串常量在内存里是唯一的，是不允许修改的
//  可以传进去，但不能修改，所以per可以传进去，但the wrong son传进去后会被修改，所以会报错 
 
	return 0;
}
