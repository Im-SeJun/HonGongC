#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;

	printf("���� a �� : %d\n", *pa);
	pa = &b;
	printf("���� b �� : %d\n", *pa);
	pa = &a;
	a = 20;
	printf("���� a �� : %d\n", *pa);

	return 0;
}

/* 
const�δ� ����Ű�� ����� ���� �ٲ� �� ����
ex)
*pa = 20; �̰� �Ұ���..
����������
const int a = 10;
a = 20; �Ұ���

==> ���ȭ const
*/