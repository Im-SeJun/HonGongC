#include <stdio.h>

int main(void)
{
	int chest = 95;
	char size;

	if (chest <= 90)
	{
		size = 'S';
	}
	// ((chest > 90) && (chest <= 100)) �̰Ŵ� 1�� ������ ������ ��츸�̶� (chest > 90) �̰� �����ʿ� x
	else if (chest <= 100)
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}

	return 0;
}