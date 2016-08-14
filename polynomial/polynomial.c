#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(void)
{
	float x = 2.55; float res;
	
	res = 3 * pow(x, 3) - 5 * pow(x, 2) + 6;
	printf("res is %f", res);
	getch();
	return 0;
}
