#include <stdio.h>
#include <math.h>
void main()
{
	int num, num1, num2,numt,a=0;
	printf("���������޺����ޡ�");
	printf("\n����=");
	scanf_s("%d", &num1);
	printf("\n����=");
	scanf_s("%d", &num2);
	for (num = num1/2*2+1; num < num2; num+=2)
	{
		for (numt = 2; numt <= sqrt(num); numt ++)
			if (num % numt == 0)
				break;
		if (numt > sqrt(num))
			printf("%d\n", num);
	}
}