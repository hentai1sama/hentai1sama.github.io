#include <stdio.h>//����һ����������ӷ�׶��򵥵���������
void words_line_up(void)  //���������͸ú���
{
	int number;
	printf("how many lines are you want to have?uh?\n");  // ��Ҫ������
	if (scanf_s("%d", &number) == 1 && number > 0)  //�ж������ʽ
	{
		printf("what words are you like?\n");
		char words[10];
		scanf_s("%s", words,10);//�˴�����ֵľ��棬����ˮƽĿǰ�����ˡ�(scanf��˺�����������Ҫ�ټ�һ�����������ѽ����
		int n = 1 , max = 1;
		printf("\n");
		while (n <= number && max <= number)  //��������ĳ���Ƭ��
			{
				for (n = 1; n <= max; n++)
					printf("%s",words);
				max++; //�������
				n = 1;  //��������ѭ�����
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
	printf("how many lines are you want to have?uh?\n");  // ��Ҫ������
	if (scanf_s("%d", &number) == 1 && number > 0)  //�ж������ʽ
	{
		printf("what words are you like?\n");
		char words[10];
		scanf_s("%s", words, 10);
		int n = 1, max = number;
		printf("\n");
		while (max>0)  //��������ĳ���Ƭ��
		{
			for (n = 1; n <= max; n++)
				printf("%s", words);
			max--; //�������
			n = 1;  //��������ѭ�����
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
	printf("how many lines are you want to have?uh?\n");  // ��Ҫ������
	if (scanf_s("%d", &number) == 1 && number > 0)  //�ж������ʽ
	{
		printf("what words are you like?\n");
		char words[10];
		scanf_s("%s", words, 10);
		int n = 1, max = 1;
		printf("\n");
		while (n <= number && max <= number)  //��������ĳ���Ƭ��
		{
			for (n = 1; n <= max; n++)
				printf("%s", words);
			max++; //�������
			n = 1;  //��������ѭ�����
			putchar('\n');
			continue;
		}
		max = number-1;
		while (max >0)  //��������ĳ���Ƭ��
		{
			for (n = 1; n <= max; n++)
				printf("%s", words);
			max--; //�������
			n = 1;  //��������ѭ�����
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
