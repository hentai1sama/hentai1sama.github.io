#include <stdio.h>
void main()
{
	int year1, year2, year;
	printf("�����������=");
	scanf_s("%d", &year1);
	printf("�����������=");
	scanf_s("%d", &year2);
	for (year = year1; year <= year2; year++)
		if ((year%4==0&&year%100!=0)||year%400==0)
			printf("%d\n", year);
}