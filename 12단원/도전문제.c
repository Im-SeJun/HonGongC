#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80], str2[80], str3[80];
	char str4[80];

	printf("세 단어 입력 : ");
	scanf("%s %s %s", str1, str2, str3);

	if (strcmp(str1, str2) > 0)
	{
		strcpy(str4, str1);
		strcpy(str1, str2);
		strcpy(str2, str4);
	}
	if (strcmp(str1, str3) > 0)
	{
		strcpy(str4, str1);
		strcpy(str1, str3);
		strcpy(str3, str4);
	}
	if (strcmp(str2, str3) > 0)
	{
		strcpy(str4, str2);
		strcpy(str2, str3);
		strcpy(str3, str4);
	}

	printf("%s, %s, %s", str1, str2, str3);

	return 0;
}