#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rec_func(int n);

int main(void)
{
	int n;

	scanf("%d", &n);

	int a = rec_func(n);
	//�Լ� ��ü�� ȣ���ؿ;� ��

	printf("%d", a);

	return 0;
}

int rec_func(int n)
{
	int a;

	if (n == 0) return 0;
	//��� �������� ���� ���;� 0 ���� �� ��� �ٽ� ����
	a = n + rec_func(n - 1);

	return a;
}