#include <stdio.h>  
#include <conio.h>  
  
#define ROW 3  
#define COL 4  
void main()  
{  
    int a[ROW][COL],b[COL][ROW];  
    int i,j;  
   //����A����  
    printf("please enter the element of matrixA:%d*%d\n",ROW,COL);  
    for (i = 0; i < ROW; i++)  
    {  
        for (j = 0; j < COL; j++)  
        {  
            scanf("%d",&a[i][j]);  
        }  
    }  
    //ת�ù���  
    for (i = 0; i < ROW; i++)  
    {  
        for (int j = 0; j < COL; j++)  
        {  
            b[j][i] = a[i][j];  
        }  
    }  
   //���A����  
    printf("matri*a %d*%d :\n",ROW,COL);  
    for (i = 0; i < ROW; i++)  
    {  
        for (j = 0; j < COL; j++)  
        {  
            printf("%8d",a[i][j]);  
        }  
        printf("\n");  
    }  
    //���B����  
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
