#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];
	int i, count;
	int j = 0;
	
	printf("���� �Է� : ");
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

	printf("�ٲ� ���� : ");
	puts(str);
	printf("�ٲ� ���� �� : %d", j);

	return 0;
}