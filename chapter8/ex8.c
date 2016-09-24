# include <stdio.h>
/*c语言函数理论上来说是接收多个参数，但只能返回一个参数，如果想像python一样返回多个值的话要采用结构体和指针了*/
float absoluteValue (float x)
{
	if (x<0)
		x = -x;
	return x;
}


