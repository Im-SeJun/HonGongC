#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, i, j;
	int count = 0;

	printf("2 �̻��� ������ �Է��ϼ��� : ");
	scanf("%d", &a);

	for (i = 2; i <= a; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}

		if (j == i)
		{
			printf("%5d", i);
			count++;

			if (count % 5 == 0)
				printf("\n");
		}
	}

	return 0;
}