#include <stdio.h>

int main(void)
{
	int a = 10;

	if (a >= 10)
	{
		a = 1;
	}
	else
	{
		a = -1;
	}

	printf("a : %d\n", a);

	return 0;
}