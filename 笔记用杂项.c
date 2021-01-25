#include<stdio.h>
void interchange(int * i,int* j);
int main(void)
{
	int x = 1, y = 2;
	printf("now x=%d,y=%d", x, y);
	interchange(&x, &y);
	printf("now x=%d,y=%d", x, y);
}

void interchange(int* i, int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

int sum(int* ar, int n);
int sum(int*, int);
int sum(int ar[], int n);
int sum(int[], int);