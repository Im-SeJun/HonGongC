#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("앞에서 3개의 문자만 비교하면?\n");
	if (strncmp(str1, str2, 3) == 0)
		printf("같다.\n");
	else
		printf("다르다.\n");

	return 0;
}