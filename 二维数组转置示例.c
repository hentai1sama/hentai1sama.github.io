#include <stdio.h>
void main()
{
	int A[][3] = { {1,2,3} ,{4,5,6} };
	int B[3][2];
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d", A[i][j]);
			B[j][i] = A[i][j];
		}
		printf("\n");
	}

	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 2; i++)
			printf("%5d", B[j][i]);
		printf("\n");
	}
}