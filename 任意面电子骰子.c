#include<stdlib.h>
#include <stdio.h>
void roll_number(void)
{
	int sides;
	printf("please enter the sides.\n");
	if(scanf_s("%d", &sides)==1&&sides>1)  //判断输入内容格式
	{
		srand(time(0));
		int test = rand();  //得到随机数 
		printf("random number is %d.\n", test); //输出随机数
		int i = test % sides + 1;    //让随机数转化为你期望的值 
		printf("result is %d.\n", i);
	}
	else
	{
		printf("error,please enter a number again.\n");
	}
}
void main()
{
	int times, sides;
	printf("Do you want to roll it more?\n(if you want to just roll it once,enter 1)\n(if you want to roll it more times,enter the times!)\n");
	if (scanf_s("%d", &times) == 1 && times == 1)
		roll_number();
	else
			printf("please enter the sides.\n");
			if (scanf_s("%d", &sides) == 1 && sides > 1)  //判断输入内容格式
			{
				int n = 1;
				while (n <= times)
				{
					srand((int) time(0));
					int test = rand();  //得到随机数(！！！此处有问题：循环中每次得到的随机数相同，异常恶心，亟待解决。
					printf("random number is %d.\n", test); //输出随机数
					int i = test % sides + 1;    //让随机数转化为你期望的值 
					printf("result is %d.\n", i);
					n++;
				}
			}
			else
			{
				printf("error,please enter a number again.\n");
			}

	printf("wow~\n");
}