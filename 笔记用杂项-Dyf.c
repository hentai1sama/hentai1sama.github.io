#include <stdio.h>
void main()
{
	int a = 1 ? (0 ? 3 : 2) : (10 ? 1 : 0);
	printf("%d", a);
}