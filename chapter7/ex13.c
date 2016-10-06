# include <stdio.h>

void sort(int a[], int n, int order)
{
	int i, j, temp;
	
	for(i=0; i<n-1; ++i)
		for(j=i+1; j<n; ++j)
			if ((a[i] > a[j] && order == 1) || (a[i] < a[j] && order == -1))
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

int main (void)  
{  
    int  i;  
    int  array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,  
                       44, -3, -9, 12, 17, 22, 6, 11 };  
    void sort (int  a[], int  n, int  order);  
  
    printf ("The array before the sort:\n");  
  
    for ( i = 0;  i < 16;  ++i )  
        printf ("%i ", array[i]);  
  
    printf ("\n\nThe array in ascending order:\n");  
  
    sort (array, 16, 1);  
  
    for ( i = 0;  i < 16;  ++i )  
        printf ("%i ", array[i]);  
  
    printf ("\n\nThe array in descending order:\n");  
  
    sort (array, 16, -1);  
  
    for ( i = 0;  i < 16;  ++i )  
        printf ("%i ", array[i]);  
  
    printf ("\n");  
    return 0;  
}  


