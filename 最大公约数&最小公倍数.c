#include <stdio.h>
#include <math.h>
int mAxnum(int, int);
void main()
{
	int num1, num2,a1;
	printf("�������������ְɡ�");
	printf("\n��һ������=");
	scanf_s("%d", &num1);
	printf("\n�ڶ�������=");
	scanf_s("%d", &num2);
	a1 = mAxnum(num1, num2);
	printf("\n�������=%d", a1);
	printf("\n��С������=%d", num1 * num2 / a1);


}
int mAxnum(int a, int b)
{
	int t=1,r=0;
	if (a < b)
	{
		r = b;
		b = a;
		a = r;
	}
	while (t != 0)
	{
		t = a % b;
		a = b;
		b = t;
	}
	return a;
}