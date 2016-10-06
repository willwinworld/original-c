#include <stdio.h>

int main(void)
{
	int x, a;
	
	for (x=0, a=0; a<=1 && !x++; a++)  // 初始化，判读条件，一个表达式 
	{
		a++;
	}
	
	printf("%d", a);
	return 0;
}


