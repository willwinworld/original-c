#include <stdio.h>
int main()
{
	float foot;
	float inch;
	
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ��:");
	
	scanf("%f %f", &foot, &inch);
	
	printf("�����%f�ס�\n",
	((foot + inch / 12) * 0.3048));
	return 0;
}
