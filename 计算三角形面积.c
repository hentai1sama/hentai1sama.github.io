#include <stdio.h>
#include <math.h>
void main()
{
	double l ,s ,a, b, c;
	printf("请依次输入三个边长(莫要输入不存在的三角形，同志！\n");
	printf("a=");
	scanf_s("%lf", &a);
	printf("\nb=");
	scanf_s("%lf", &b);
	printf("\nc=");
	scanf_s("%lf", &c);
	l = (a + b + c)/2;
	s = sqrt(l * (l - a) * (l - b) * (l - c));
	printf("\ns=%.2f", s);
}