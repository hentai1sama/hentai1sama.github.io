#include <stdio.h>//这是一个看起来很臃肿而简单的辣鸡程序。
void words_line_up(void)  //声明并解释该函数
{
	int number;
	printf("how many lines are you want to have?uh?\n");  // 想要的行数
	if (scanf_s("%d", &number) == 1 && number > 0)  //判断输入格式
	{
		printf("what words are you like?\n");
		char words[10];
		scanf_s("%s", words,10);//此处有奇怪的警告，限于水平目前处理不了。(scanf与此函数有区别，需要再加一个参数，现已解决。
		int n = 1 , max = 1;
		printf("\n");
		while (n <= number && max <= number)  //负责输出的程序片段
			{
				for (n = 1; n <= max; n++)
					printf("%s",words);
				max++; //负责递增
				n = 1;  //负责重启循环输出
				putchar('\n');
				continue;
			}
	}
	else
		printf("Error,you just can enter some number.\n");
}
void words_line_down(void)
{
	int number;
	printf("how many lines are you want to have?uh?\n");  // 想要的行数
	if (scanf_s("%d", &number) == 1 && number > 0)  //判断输入格式
	{
		printf("what words are you like?\n");
		char words[10];
		scanf_s("%s", words, 10);
		int n = 1, max = number;
		printf("\n");
		while (max>0)  //负责输出的程序片段
		{
			for (n = 1; n <= max; n++)
				printf("%s", words);
			max--; //负责递增
			n = 1;  //负责重启循环输出
			putchar('\n');
			continue;
		}
	}
	else
		printf("Error,you just can enter some number.\n");

}
void words_line_upanddown(void)
{
	int number;
	printf("how many lines are you want to have?uh?\n");  // 想要的行数
	if (scanf_s("%d", &number) == 1 && number > 0)  //判断输入格式
	{
		printf("what words are you like?\n");
		char words[10];
		scanf_s("%s", words, 10);
		int n = 1, max = 1;
		printf("\n");
		while (n <= number && max <= number)  //负责输出的程序片段
		{
			for (n = 1; n <= max; n++)
				printf("%s", words);
			max++; //负责递增
			n = 1;  //负责重启循环输出
			putchar('\n');
			continue;
		}
		max = number-1;
		while (max >0)  //负责输出的程序片段
		{
			for (n = 1; n <= max; n++)
				printf("%s", words);
			max--; //负责递增
			n = 1;  //负责重启循环输出
			putchar('\n');
			continue;
		}
	}
	else
		printf("Error,you just can enter some number.\n");

}


void main(void)
{
	printf("what do you want to have?\nup?(enter 1)\ndown?(enter 2)\nor up and down?(enter 3)\nYou can enter 0 to quit!\n");
	int order;
	while ((scanf_s("%d", &order)) != 0)
	{
		switch (order)
		{
		case 1:
			words_line_up();
			break;
		case 2:
			words_line_down();
			break;
		case 3:
			words_line_upanddown();
			break;
		default:
			break;
		}
		break;
	}
	printf("ALL DONE!");
}
