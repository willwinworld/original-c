#include <stdio.h>

int main(void)
{
	int x, a;
	
	for (x=0, a=0; a<=1 && !x++; a++)  // ��ʼ�����ж�������һ�����ʽ 
	{
		a++;
	}
	
	printf("%d", a);
	return 0;
}


