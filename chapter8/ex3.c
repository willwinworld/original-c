# include <stdio.h>

float absoluteValue (float x)
{
	if (x<0)
		x = -x;
	return x;
}

float squareRoot(float x, const float epsilon)
{   
    float guess = 1.0;
	while (absoluteValue(guess*guess-x) >= epsilon)
		guess = (x/guess+guess) / 2.0;
		
	return guess;
}

int main(void)
{
	float result1, result2, result3;
	float squareRoot(float x, const float epsilon);
	result1 = squareRoot(2.0, .00001);
	result2 = squareRoot(144.0, .00001);
	result3 = squareRoot(17.5, .00001);
	printf("squareRoot(2.0, .00001) = %f\n", result1);
	printf("squareRoot(144.0, .00001) = %f\n", result2);
	printf("squareRoot(17.5, .00001) = %f\n", result3);
	return 0;
}
