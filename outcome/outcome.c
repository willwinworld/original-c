#include <stdio.h>
int main()
{
	char c, d, i;
	
	c = 'd';
	d = c;
	i = 'a';
	printf("%c\n", i);  // 显示结果就是a 
	printf("d = %c\n", d);  // 结果竟然是d,而不是'd' 
	
	return 0;
}
