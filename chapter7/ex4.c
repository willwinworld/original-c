# include <stdio.h>

int main(void)
{
	float array[10], number, sum, average;
	int i;
	
	for (i=0; i<10; i++)
	{
		printf("Input a float number: ");
		scanf("%f", &number);
		array[i] = number;
	}
	
	sum = 0.0;
	for (i=0; i<10; i++)
	{
		sum += array[i]; 
	}
	average = sum / 10;
    printf("The average of 10 numbers is %f: ", average);
    return 0;
}
