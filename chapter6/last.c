#include <stdio.h>  
#include <stdbool.h>  
  
int main (void)  
{  
  
    int   p, d;  
    bool  isPrime;  
  
    // we start off knowing 2 is prime   
  
    printf ("2  ");  
  
    // now start testing odd numbers from 3   
  
    for ( p = 3;  p <= 50;  p +=2 )  
    {  
        isPrime = true;  
  
        // only test odd divisors   
  
        for ( d = 3;  d < p && isPrime == true;  d += 2 )
		{
          if ( p % d  ==  0 )  
            isPrime = false;
		}  
  
        if ( isPrime != false )  
          printf ("%i  ", p);  
    }  
  
    printf ("\n");  
    return 0;  
}  

