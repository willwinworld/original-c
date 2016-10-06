# include <stdio.h>

int main(void)
{
	int u, v;
	printf("Enter two positive integers: ");
	scanf("%d %d", &u, &v);
	printf("G.C.D of %d and %d is %d.", u, v, gcd(u, v));
	return 0;
}

int gcd(int u, int v)
{
	if (v != 0)
	{
		return gcd(v, u%v);
	}
	else
	{
		return u;
	}
}
