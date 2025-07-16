#include <stdio.h>

int main(void)
{
	int chest = 95;
	char size;

	if (chest <= 90)
	{
		size = 'S';
	}
	// ((chest > 90) && (chest <= 100)) 이거는 1번 조건이 거짓인 경우만이라 (chest > 90) 이거 넣을필요 x
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