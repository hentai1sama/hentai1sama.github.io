#include<stdio.h>
void to_b(unsigned long n);
int main(void)
{
	unsigned long number;
	printf("Enter an integer!\n(q to quiz)\n");
	while (scanf_s("%lu", &number) == 1)
	{
		printf("Binary equivalent:");
		to_b(number);
		putchar('\n');
		printf("Enter an integer!\n(q to quiz)\n");
	}
	printf("Done!\n");
	return 0;
}
void to_b(unsigned long n)
{
	int r;
	r = n % 2;
	if (n >= 2)
		to_b(n / 2);
	putchar(r == 0 ? '0' : '1');
}