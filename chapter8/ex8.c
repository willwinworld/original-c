# include <stdio.h>
/*c语言函数理论上来说是接收多个参数，但只能返回一个参数，如果想像python一样返回多个值的话要采用结构体和指针了*/
float absoluteValue (float x)
{
	if (x<0)
		x = -x;
	return x;
}

float squareRoot(float x)
{
	const float epsilon = .00001;
	float guess = 1.0;
	
	while (absoluteValue(guess * guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;
		
	return guess;
}

int main(void)
{   
    float absoluteValue(float x);
	float squareRoot(float x);
	int a, b, c;
	float discriminant, x1, x2;
	  
	printf("Please input a, b, c: ");
	scanf("%i %i %i", &a, &b, &c);
	
	discriminant = b*b - 4*a*c;
	
	if (discriminant<0)
	{
		printf("roots of the equation, x1 and x2, are imaginary numbers.\n");
	}
	else
	{
		x1 = (-b + squareRoot(discriminant)) / (2*a);
		x2 = (-b - squareRoot(discriminant)) / (2*a);
		if (x1-x2 > .01)
		{
			printf("two roots: %f, %f\n", x1, x2);
		}
		else
		{
			printf("one roots: %f\n", x1);
		}
	}
	
	return 0;
}
