#include <stdio.h>
void main()
{
	int n, a = 0, b = 1, temp = 0;
	int num;
	printf("想要几位数啊？");
	scanf_s("%d", &num);
	for (n = 1; n<=num; n++)
	{
		printf("第%d位数是%d\n",n, a);
		temp = a + b;
		a = b;
		b = temp;
	}
}