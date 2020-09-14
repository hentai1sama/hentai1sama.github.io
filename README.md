# hentai1sama.github.io
#include <stdio.h>
#define PRAISE "you are an extraordinary being."
int main(void)
{
	char name[40];

	printf("what is your name?");
	scanf_s("%s", name,40);
	printf("hello,%s.%s\n", name, PRAISE);

	return 0;
}
