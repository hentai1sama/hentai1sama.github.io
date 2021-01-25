#include <stdio.h>
void main()
{
	char a;
	int C=0, c=0, n=0,space=0;
	while ((a = getchar() )!='\n')
	{
		if (a > 64 && a < 91)
			C++;
		else if (a > 47 && a < 58)
			n++;
		else if (a > 96 && a < 123)
			c++;
		else if (a == 32)
			space++;
	}
	printf("c=%d\nC=%d\nn=%d\nspace=%d", c, C, n, space);
}