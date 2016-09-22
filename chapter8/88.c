# include <stdio.h>

float absoluteValue (float x)
{
	if (x<0)
		x = -x;
	
	return x;
}

float NR(float x)
{   
    const float epsilon = .00001;
    float guess = 1.0;
    float absolute;

	absolute = absoluteValue(guess*guess - x);
	while (absolute >= epsilon)
	{
		guess = (x / guess + guess) / 2;
	}
	
	return guess;
}

int main(void)
{
	printf("squareRoot (2.0) = %f\n", NR(2.0));
	printf("squareRoot (144.0) = %f\n", NR(144.0));
	printf("squareRoot (17.5) = %f\n", NR(17.5));
	
	return 0;
}
