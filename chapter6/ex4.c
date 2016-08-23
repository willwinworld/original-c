#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	float value, acc;
	char operator;
	bool onoff = 1;
	
	acc = 0;
	printf("Type in your expression.\n");
	while ( onoff == 1)
	{
		scanf("%f %c", &value, &operator);
		switch (operator)
		{
			case 'S':
				acc = value;
				printf("The result is %f\n", acc);
				break;
			case '+':
				acc += value;
				printf("The result is %f\n", acc);
				break;
			case '-':
				acc -= value;
				printf("The result is %f\n", acc);
				break;
			case '*':
				acc *= value;
				printf("The result is %f\n", acc);
				break;
			case '/':
				if (value == 0)
					printf("divisor can't be zero!\n");
				else
					acc /= value;
					printf("The result is %f\n", acc);
				break;
			case 'E':
				printf("End of program.\n");
				onoff = 0;
				break;
			default:
				printf("Unknown operator.\n");
				onoff = 0;
				break;
		}
	}
	return 0;
}

