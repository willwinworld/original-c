# include <stdio.h>

int gcd(int u, int v)
{
	int temp;
	
	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	
	return u;
}

int main(void)
{
	int gcd(int u, int v);
	int u, v, lcm;
	
	printf("Input u and v : ");
	scanf("%i %i", &u, &v);
	
	lcm = (u * v) / gcd(u, v);
    printf("lcm is %i", lcm);
	
	return 0;
}
