#include<stdlib.h>
#include <stdio.h>
void roll_number(void)
{
	int sides;
	printf("please enter the sides.\n");
	if(scanf_s("%d", &sides)==1&&sides>1)  //�ж��������ݸ�ʽ
	{
		srand(time(0));
		int test = rand();  //�õ������ 
		printf("random number is %d.\n", test); //��������
		int i = test % sides + 1;    //�������ת��Ϊ��������ֵ 
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
			if (scanf_s("%d", &sides) == 1 && sides > 1)  //�ж��������ݸ�ʽ
			{
				int n = 1;
				while (n <= times)
				{
					srand((int) time(0));
					int test = rand();  //�õ������(�������˴������⣺ѭ����ÿ�εõ����������ͬ���쳣���ģ�ؽ�������
					printf("random number is %d.\n", test); //��������
					int i = test % sides + 1;    //�������ת��Ϊ��������ֵ 
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