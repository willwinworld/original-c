# include <stdio.h>

void sort(int a[], int n, int order)
{
	int i, j, temp;
	
	if (order == 1)  // �趨orderΪ1ʱ������ -1ʱ�ǽ���
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
