#include <stdio.h>
int main()
{
	float foot;
	float inch;
	
	printf("请分别输入身高的英尺和英寸:");
	
	scanf("%f %f", &foot, &inch);
	
	printf("身高是%f米。\n",
	((foot + inch / 12) * 0.3048));
	return 0;
}
