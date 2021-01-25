#include <stdio.h>
void main()
{
	int year1, year2, year;
	printf("输入年份下限=");
	scanf_s("%d", &year1);
	printf("输入年份上限=");
	scanf_s("%d", &year2);
	for (year = year1; year <= year2; year++)
		if ((year%4==0&&year%100!=0)||year%400==0)
			printf("%d\n", year);
}