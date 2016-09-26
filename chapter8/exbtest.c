#include <stdio.h>  
#include <conio.h>  
  
#define ROW 3  
#define COL 4  
void main()  
{  
    int a[ROW][COL],b[COL][ROW];  
    int i,j;  
   //输入A矩阵  
    printf("please enter the element of matrixA:%d*%d\n",ROW,COL);  
    for (i = 0; i < ROW; i++)  
    {  
        for (j = 0; j < COL; j++)  
        {  
            scanf("%d",&a[i][j]);  
        }  
    }  
    //转置过程  
    for (i = 0; i < ROW; i++)  
    {  
        for (int j = 0; j < COL; j++)  
        {  
            b[j][i] = a[i][j];  
        }  
    }  
   //输出A矩阵  
    printf("matri*a %d*%d :\n",ROW,COL);  
    for (i = 0; i < ROW; i++)  
    {  
        for (j = 0; j < COL; j++)  
        {  
            printf("%8d",a[i][j]);  
        }  
        printf("\n");  
    }  
    //输出B矩阵  
    printf("matri*b %d*%d :\n",COL,ROW);  
    for (i = 0; i < COL; i++)  
    {  
        for (j = 0; j < ROW; j++)  
        {  
            printf("%8d",b[i][j]);  
        }  
        printf("\n");  
    }  
    getch();  
}  
