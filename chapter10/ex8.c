#include <stdio.h>

void sort3(int *a, int *b, int *c)
{
	int temp;
	
	if(*a > *b)
	{
		temp = *b;
		*b = *a;
		*a = temp;
	}
	if(*b > *c)
	{
		temp = *c;
		*c = *b;
		*b = temp;
	}
	if(*a > *b)
	{
		temp = *b;
		*b = *a;
		*a = temp;
	}
}

int main (void)
{
	int i1 = 9;
	int i2 = 5;
	int i3 = 3;

	printf ("i1 = %i, i2 = %i, i3 = %i\n", i1, i2, i3);

	sort3 (&i1, &i2, &i3);

	printf ("i1 = %i, i2 = %i, i3 = %i\n", i1, i2, i3);

	return 0;
}
