#include<stdio.h>
int main(void)
{
	char ch[10];
	while (getchar(&ch) != '#')
		putchar(&ch);
	return 0;
}

