#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("$");
	}

	/*�׷��� printf()�� ù ��° ���ڸ� ���ڿ��� �ؼ��Ϸ��� ��
	���� '$'�� �� �ǰ� "$"�� ����� �ƴϸ� %c, '$'�� ���簡....*/

	return 0;
}