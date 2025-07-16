#include <stdio.h>

int main(void)
{
	int age = 25, chest = 95;
	char size;
	if (age < 20)
	{
		if (chest < 85)
		{
			printf("사이즈는 S입니다.");
		}
		else if (chest < 95)
		{
			printf("사이즈는 M입니다.");
		}
		else
		{
			printf("사이즈는 L입니다.");
		}
	}
	else
	{
		if (chest < 90)
		{
			printf("사이즈는 S입니다.");
		}
		else if (chest < 100)
		{
			printf("사이즈는 M입니다.");
		}
		else
		{
			printf("사이즈는 L입니다.");
		}
	}

	return 0;
}