#include <stdio.h>
void main()
{
	int temp,num1, num2,num,a=0;
	printf("��Χ����Сֵ=");
	scanf_s("%d", &num1);
	printf("\n��Χ�����ֵ=");
	scanf_s("%d", &num2);
	for (num = num1; num <= num2; num++)
	{
		temp = num;
		int tnum = num;
		a = 0;
		while(tnum)
		{
			a += (tnum % 10)* (tnum % 10)* (tnum % 10);
			tnum /= 10; 
		}
		if (a==temp)
			printf("%d\n", a);
	}
}