#include <stdio.h>
#include <math.h>
int mAxnum(int, int);
void main()
{
	int num1, num2,a1;
	printf("请输入两个数字吧。");
	printf("\n第一个数字=");
	scanf_s("%d", &num1);
	printf("\n第二个数字=");
	scanf_s("%d", &num2);
	a1 = mAxnum(num1, num2);
	printf("\n最大公因数=%d", a1);
	printf("\n最小公倍数=%d", num1 * num2 / a1);


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