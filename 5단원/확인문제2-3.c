#include <stdio.h>

int main(void)
{
	int age = 25, chest = 95;
	char size;
	if (age < 20)
	{
		if (chest < 85)
		{
			printf("������� S�Դϴ�.");
		}
		else if (chest < 95)
		{
			printf("������� M�Դϴ�.");
		}
		else
		{
			printf("������� L�Դϴ�.");
		}
	}
	else
	{
		if (chest < 90)
		{
			printf("������� S�Դϴ�.");
		}
		else if (chest < 100)
		{
			printf("������� M�Դϴ�.");
		}
		else
		{
			printf("������� L�Դϴ�.");
		}
	}

	return 0;
}