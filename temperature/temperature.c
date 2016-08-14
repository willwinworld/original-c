#include <stdio.h>
#include <conio.h> // 包含conio.h文件
int main(void)
{
	float C; int F = 27;
	
	C = (F - 32) / 1.8;
	printf("answer is %f", C);
	
	getch(); // getch作用是获得键盘输入后返回，相当于按任意键继续
	return 0;
}
