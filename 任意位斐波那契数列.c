#include <stdio.h>
void main()
{
	int n, a = 0, b = 1, temp = 0;
	int num;
	printf("��Ҫ��λ������");
	scanf_s("%d", &num);
	for (n = 1; n<=num; n++)
	{
		printf("��%dλ����%d\n",n, a);
		temp = a + b;
		a = b;
		b = temp;
	}
}