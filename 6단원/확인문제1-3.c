#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("$");
	}

	/*그런데 printf()는 첫 번째 인자를 문자열로 해석하려고 함
	따라서 '$'는 안 되고 "$"로 써야함 아니면 %c, '$'로 가든가....*/

	return 0;
}