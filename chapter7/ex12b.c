# include <stdio.h>

void transposeMatrix(int nRows, int nCols, int matrix1[nRows][nCols], int matrix2[nCols][nRows])
{
	int row, column;
	for(row=0; row<nRows; ++row)
	{
		for(column=0; column<nCols; ++column)
		{
			matrix2[column][row] = matrix1[row][column];
		}
	}
    
	printf("The original matrix: \n");
	for(row=0; row<nRows; ++row)
	{
		for(column=0; column<nCols; ++column)
		{
			printf("%8d", matrix1[row][column]);
		}
		printf("\n");
	}	
	
	printf("After transposing: \n");
	for (row=0; row<nCols; ++row)
	{
		for (column=0; column<nRows; ++column)
		{
			printf("%8d", matrix2[row][column]);
		}
		printf("\n");
	}
}

void main(void)
{
	void transposeMatrix(int nRows, int nCols, int matrix1[nRows][nCols], int matrix2[nCols][nRows]);
	int nRows, nCols, matrix1[nRows][nCols], matrix2[nCols][nRows], i, j;
	
	printf("Input row and column: ");
	scanf("%i %i", &nRows, &nCols);
	printf("\n");
	
	printf("%d\n", nRows);
	printf("%d\n", nCols);
	printf("Input elements in origin: \n");
    for (i=0; i<nRows; ++i)
    	for (j=0; i<nCols; ++j)
    		scanf("%4i", &matrix1[i][j]);
        
    

    printf("Put values into another matrix\n");
//    for (i=0; i<nRows; ++i)
//    {
//    	for (j=0; j<nCols; ++j)
//    	{
//    		matrix2[j][i] = matrix1[i][j];
//		}
//	}
//	
//	transposeMatrix(nRows, nCols, matrix1, matrix2);
}
