#include <stdio.h>
#include <conio.h>

int main (void)
{
    float x=2.55, a,b,c,d,sum;
    a = x*x*x;
    b = x*x;
    c = a*3;
    d = 5*b;
    sum = 3*a - 5*b + 6;


    printf ("x = %g\n\n",x); // %g 根据数值不同自动选择％f或％e
    printf ("3x^3 - 5x^2 + 6 = %g\n\n",sum );
    printf ("3(2.55*2.55*2.55)-5(2.55*2.55) + 6 = %g\n\n",sum);
    printf ("3*%g - 5*%g + 6 = %g\n\n",a,b,sum);
    printf ("%g - %g + 6 = %g\n",c,d,sum);   
     
    getch();
    return 0;
}
