#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	char q;

	printf("��Ģ���� �Է�(����) : ");
	scanf("%d %c %d", &a, &q, &b);

	if (q == '+')
	{
		printf("%d%c%d=%d", a, q, b, a + b);
	}
	else if (q == '-')
	{
		printf("%d%c%d=%d", a, q, b, a - b);
	}
	else if (q == '*')
	{
		printf("%d%c%d=%d", a, q, b, a * b);
	}
	else if (q == '/')
	{
		printf("%d%c%d=%d", a, q, b, a / b);
	}
	else
	{
		printf("��Ģ������ �ƴմϴ�.");
	}

	return 0;
}