#include <stdio.h>
#include <conio.h>
int main(void)
{
	long double a, b, c, d, x;
	a = 3.31e-8;
	b = 2.01e-7;
	c = 7.16e-6;
	d = 2.01e-8;
	x = (a * b) / (c + d);
	
	printf("%Lg\n", x);
	return 0;
}
