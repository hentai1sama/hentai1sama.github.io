#include <stdio.h>
void Ft();
void Ct();
void main()
{
	int input;
	printf("输入1进行华氏转换，输入2进行摄氏转换。\n");
	scanf_s("%d", &input);
	switch (input)
	{
	case 1:
		Ft();
		break;
	case 2:
		Ct();
		break;
	default:
		printf("ERROR");
		break;
	}
}

void Ft() 
{
	float t;
	printf("请输入华氏温度=");
	scanf_s("%f", &t);
	printf("\n对应的摄氏温度=%.2f℃",  (t - 32) / 1.8);
}

void Ct()
{
	float tt;
	printf("请输入摄氏温度=");
	scanf_s("%f", &tt);
	printf("\n对应的华氏温度=%.2f℉", (tt * 1.8 + 32));
}