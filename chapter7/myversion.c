 # include <stdio.h>
 
 float absoluteValue(float x)
 {
 	if ( x < 0)
 		x = -x;
 	return x;
 }
 
 float SquareRoot(float x)
 {  
    float guess = 1.0;
    const float epsilon = .00001;
 	while (absoluteValue(guess * guess - x) >= epsilon)
 	{
 		guess = (x / guess + guess) / 2.0;
	}
	
	return guess;
 }
 
 int main(void)
 {
 	printf("%f", SquareRoot(4.0));
 	return 0;
 }
