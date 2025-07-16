#include <stdio.h>

void sum(int n);

int main(void)
{
	sum(10);
	sum(100);
	return 0;
}
// int sum이 아니라 void sum : sum함수가 값을 반환하지 x
void sum(int n)
{
	int i;
	int add = 0;
	for (i = 1; i <= n; i++)
	{
		add += i;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", n, add);
}