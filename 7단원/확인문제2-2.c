#include <stdio.h>

void sum(int n);

int main(void)
{
	sum(10);
	sum(100);
	return 0;
}
// int sum�� �ƴ϶� void sum : sum�Լ��� ���� ��ȯ���� x
void sum(int n)
{
	int i;
	int add = 0;
	for (i = 1; i <= n; i++)
	{
		add += i;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, add);
}