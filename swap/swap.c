# include <stdio.h>
int main()
{
	int a = 5, b = 6, t;
	
	t = a; // t = 5
	a = b; // a = 6
	b = t; // b = 5
	
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	return 0;
}
