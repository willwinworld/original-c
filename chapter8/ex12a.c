# include <stdio.h>
/*c语言不允许返回数组 */

void transposeMatrix(int Matrix1[4][5], int Matrix2[5][4])
{
//	int row, column;
	int i, j;
	
	for (i=0; i<4; ++i)
		for(j=0; j<5; ++j)
			Matrix2[j][i] = Matrix1[i][j];
			
	printf("The original matrix is: \n");
	for (i=0; i<4; ++i)
	{
		for(j=0; j<5; ++j)
		{
			printf("%4d", Matrix1[i][j]);
	    }
		printf("\n");
    }
			
	printf("After transposing, the matrix is:\n");
	for (i=0; i<5; ++i)
	{
		for(j=0; j<4; ++j)
		{
			printf("%4d", Matrix2[i][j]);
	    }
		printf("\n");
    }
}

void main(void)
{
	void transposeMatrix(int Matrix1[4][5], int Matrix2[5][4]);
	int Matrix1[4][5] = {
	                     {1, 1, 1, 1, 1},
						 {2, 2, 2, 2, 2},
						 {3, 3, 3, 3, 3},
						 {4, 4, 4, 4, 4}
						};
	int Matrix2[5][4] = {
		                 {0, 0, 0, 0},
						 {0, 0, 0, 0},
						 {0, 0, 0, 0},
						 {0, 0, 0, 0},
						 {0, 0, 0, 0} 
	                    };
    transposeMatrix(Matrix1, Matrix2);
}
