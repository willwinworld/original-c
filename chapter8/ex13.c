# include <stdio.h>

void sort(int a[], int n, int order)
{
	int i, j, temp;
	
	if (order == 1)  // 设定order为1时是升序， -1时是降序
	{
		for(i=0; i<n-1; ++i)
			for(j=i+1; j<n; ++j)
				if (a[i] > a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
	}
	else if  (order == -1)
	{
		for(i=0; i<n-1; ++i)
			for(j=i+1; j<n; ++j)
				if (a[i] < a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;	
				} 
	}
}
