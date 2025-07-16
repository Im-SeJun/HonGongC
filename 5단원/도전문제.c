#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	char q;

	printf("사칙연산 입력(정수) : ");
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
		printf("사칙연산이 아닙니다.");
	}

	return 0;
}