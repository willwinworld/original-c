#include <stdio.h>
int main(void){
	int n, m = pow(n, 2);
	
    printf("TABLE OF n CORRESPOND TO n^2\n\n");
    printf("n     n^2\n");
    printf("---   -----------\n");
    
    for(n=1; n<=10; ++n){
    	printf(" %2i      %i\n", n,  n*n);
	}
	return 0;
}



