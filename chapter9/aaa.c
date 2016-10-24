#include <stdio.h>

int transposeMatrix(int arrays1[4][5], int arrays2[5][4])
{
	int row, col;
	for(row=0; row<4; row++)
	{
		for(col=0; col<5; col++)
			arrays2[col][row] = arrays1[row][col];
	}
	return arrays2;
}

int main()
{
	int arrays2[5][4];
	int row, col;
	int arrays1[4][5] = {
		{0, 1, 2, 3, 4},
		{5, 6, 7, 8, 9},
		{10, 11, 12, 13, 14},
		{15, 16, 17, 18, 19},
	};
	transposeMatrix(arrays1, arrays2);
	for(row=0; row<5; row++){
		for(col=0; col<4; col++)
			printf("%5i", arrays2[row][col]);
		printf("\n"); 
	}
	return 0;
}
