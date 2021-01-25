#include <stdio.h>
void main()
{
	int A[][3] = { {1,2,2} ,{4,5,4},{7,8,9 } };
	int i, j, max=0, min=5;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			if (A[i][j] > max)
				max = A[i][j];
			if (A[i][j] < min)
				min = A[i][j];
		}
	printf("max=%d,min=%d", max, min);
}