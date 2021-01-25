#include <stdio.h>
void main()
{
	int i,j,n1,n2;
	int ar[5][5];
	ar[0][0] = 1;
	ar[1][0] = ar[1][1] = 1;
	for ( i =2; i < 5; i++)
		for(j=1;j<i;j++)
		{
			ar[i][0] = ar[i][i] = 1;
			ar[i][j] = ar[i - 1][j - 1] + ar[i - 1][j];
		}
	for (n1 = 0; n1 < 5; n1++)
	{
		for (n2 = 0; n2 <= n1; n2++)
			printf("%d", ar[n1][n2]);
		printf("\n");
	}
}