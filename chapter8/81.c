# include <stdio.h>

void printMessage (void)  // 从左往右，第一个void说明没有返回值，第二个void说明函数没有接收任何参数 
{
	printf("Programming is fun.\n");
}

int main(void)
{
	printMessage();
	
	return 0;	
} 
