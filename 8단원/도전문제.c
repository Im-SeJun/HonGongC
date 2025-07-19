#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];
	int i, count;
	int j = 0;
	
	printf("문장 입력 : ");
	gets(str);

	count = sizeof(str) / sizeof(str[0]);

	for (i = 0; i < count; i++)
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = (int)str[i] + 32;
			j += 1;
		}
	}

	printf("바뀐 문장 : ");
	puts(str);
	printf("바뀐 문자 수 : %d", j);

	return 0;
}