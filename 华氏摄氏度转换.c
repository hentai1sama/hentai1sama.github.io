#include <stdio.h>
void Ft();
void Ct();
void main()
{
	int input;
	printf("����1���л���ת��������2��������ת����\n");
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
	printf("�����뻪���¶�=");
	scanf_s("%f", &t);
	printf("\n��Ӧ�������¶�=%.2f��",  (t - 32) / 1.8);
}

void Ct()
{
	float tt;
	printf("�����������¶�=");
	scanf_s("%f", &tt);
	printf("\n��Ӧ�Ļ����¶�=%.2f�H", (tt * 1.8 + 32));
}