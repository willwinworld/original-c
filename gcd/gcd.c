#include <stdio.h>

int main(void)
{   
    int u, v, temp;
    
	printf("please input two non-negative numbers:");
	scanf("%i%i", &u, &v);
	
	while(v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	
	printf("gcd is %i\n", u);
	
	return 0;
}

