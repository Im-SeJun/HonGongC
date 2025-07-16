#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rec_func(int n);

int main(void)
{
	int n;

	scanf("%d", &n);

	int a = rec_func(n);
	//함수 자체를 호출해와야 됨

	printf("%d", a);

	return 0;
}

int rec_func(int n)
{
	int a;

	if (n == 0) return 0;
	//재귀 종료조건 먼저 나와야 0 됐을 때 재귀 다시 안함
	a = n + rec_func(n - 1);

	return a;
}