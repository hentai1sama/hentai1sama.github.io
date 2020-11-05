#include<stdio.h>

void check(float BMI)
{
	if (BMI < 18.5)
		printf("Maybe you should eat more!\n");
	if (BMI > 23.9)
		printf("Maybe you shoule eat less!\n");
	if (BMI <= 23.9 && BMI >= 18.5)
		printf("Maybe you have done well enough!\n");
}

void main()
{
	float height, weight;
	printf("Hello! R U OK?\nMaybe I can tell you the BMI!\n");
	printf("Please tell me your height!(m)\n");
	if (scanf_s("%f", &height) == 1)
	{
		printf("Yeah,then tell me your weight.(kg)\n");
		if (scanf_s("%f", &weight) == 1)
		{
			float BMI = weight / (height * height);
			printf("So,your BMI is %.2f.\n", BMI);
			check(BMI);
			int i = height * height;
			if (BMI <= 23.9 && BMI >= 18.5)
				printf("Keep it!\n");
			else
				printf("Until about %.1f kg!", 18.5*i);
		}
		else
			printf("Something wrong!");
	}
	else
		printf("Something wrong!");

}
