# include <stdio.h>

int arraySum(int array[], int index)
{
	int i, sum=0;
	for (i=0; i<index; ++i)
	{
		sum += array[i];
	}
	
	return sum;
}

int main(void)
{
	int arraySum(int array[], int index);
	int array[2], i, index=2, result;
	
	for (i=0; i<index; ++i)
	{
		array[i] = 2;
	}
	
	result = arraySum(array, 2);
	printf("The result is: %i", result);
	
	return 0;
}
