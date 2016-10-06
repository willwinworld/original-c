#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	float value, acc;
	char operator;
	bool onoff = 1;

	acc = 0;
	printf("Type in your expression.\n");
	while (onoff == 1)
	{
	    scanf("%f %c", &value, &operator);
		switch (operator)
		{
			case 'S':
				acc = value;
				printf("= %f\n", acc);
				break;
		    case '+':
		    	acc += value;
		    	printf("= %f\n", acc);
		    	break;
		    case '-':
		    	acc -= value;
		    	printf("= %f\n", acc);
		    	break;
		    case '*':
		    	acc *= value;
		    	printf("= %f\n", acc);
		    	break;
		    case '/':
		    	acc /= value;
		    	printf("= %f\n", acc);
		    	break;
		    case 'E':
		    	onoff = 0;
				printf("= %f\n", acc);
				break;	
			default:
				printf("Unknown operator.\n");
				break;
		}
	}
}
