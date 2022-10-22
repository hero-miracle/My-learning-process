#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
int main()
{
	int a, x, y;
	printf("****************************\n");
	printf("*******1.add     2.sub******\n");
	printf("*******3.mul     4.div******\n");
	printf("***********0.exit***********\n");
	printf("****************************\n");
	printf("请选择模式:>\n");
	scanf("%d", &a);
	printf("请输入两个操作数:>");
	scanf("%d%d", &x, &y);
	if (a >= 1 && a <= 4)
	{
		int (*parr[5])(int, int) = { 0,add,sub,mul,div };
		int ret = parr[a](x, y);
		printf("%d", ret);
	}
	else if (a == 0)
	{
		printf("退出");
	}
	else
		printf("输入错误");
	return 0;
}