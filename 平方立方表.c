#include<stdio.h>
void main()
{
	printf("Tell me!\nHow many numbers do you want to have?\n");
	int num;
	int i = 1;
	scanf_s("%d", &num);
	while (i <= num)
	{
		printf("%5d %5d %5d\n", i,i*i,i*i*i);
		i++;
	}
	printf("All Done!\n");
}