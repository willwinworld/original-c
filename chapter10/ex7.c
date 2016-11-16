#include <stdio.h>

void sort(int *a, int n)
{
	int *aptr1, *aptr2, temp;
	
	for(aptr1=a; aptr1<a+n-1; ++aptr1)
		for(aptr2=aptr1+1; aptr2<a+n; ++aptr2)
			if(*aptr1 > *aptr2)
			{
				temp = *aptr1;
				*aptr1 = *aptr2;
				*aptr2 = temp;
			}
}
/*包含n个元素的数组a进行排序*/
//void sort(int a[], int n)
//{
//	int i, j, temp;
//	
//	for(i=0; i<n-1; ++i)
//		for(j=1; j<n; ++j)
//			if(a[i] > a[j])
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//}

int main(void)
{
	int *i, *a;
	int n = 6;
	int array[6] = {1, 3, 2, 5, 4, 6};
	
	printf("The array before the sort:\n");
	for(i=array; i<array+6; ++i)
		printf("%i", *i);
		
	sort(array, n);
	sort(&array, n);
	sort(&array[0], n);
	printf("\n\nThe array after the ascending sort:\n");
	for(i=array; i<array+6; ++i)
		printf("%i", *i);
		
	return 0;
}


