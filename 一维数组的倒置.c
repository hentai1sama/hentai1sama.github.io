#include <stdio.h>
void ar_swap(int*, int);
void main()
{
	int n;
	int ar[] = { 1,2,3,4,5,6,7,8,9 };
	int num = sizeof(ar) / sizeof(*ar);
	ar_swap(ar, num);
	for (n = 0; n < num; n++)
		printf("%d", ar[n]);
}

void ar_swap(int*a, int n)
{
	int* p1, * p2, t;
	p1 = a;
	p2 = a + n - 1;
	while (p1 < p2)
	{
		t = *p1;
		*p1 = *p2;
		*p2 = t;
		p1++;
		p2--;
	}
}
