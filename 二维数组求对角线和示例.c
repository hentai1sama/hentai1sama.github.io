#include <stdio.h>
void main()
{
	int A[][3] = { {1,2,2} ,{4,5,4},{7,8,9 } };
	int i, sum = 0,sum2=0;
	for (i = 0; i < 3; i++)
	{
		sum += A[i][i];
		sum2 += A[2 - i][i];
	}
	printf("%d", sum);
	printf("%d", sum2);
}