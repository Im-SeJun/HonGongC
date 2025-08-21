#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int a, i, j;
	int** matrix;
	
	printf("양수 입력 : ");
	scanf("%d", &a);

	matrix = (int**)malloc((a / 5) * sizeof(int*));
	for (i = 0; i < 4; i++)
	{
		matrix[i] = (int*)malloc(5 * sizeof(int));
	}

	for (i = 2; i < (a / 5); i++)
	{
		for (j = 2; j < 7; j++)
		{
			if (i % j == 0)
			{
				printf("%d", j);
			}
			else
			{
				printf("X");
			}
		}
		printf("\n");
	}

	for (i = 0; i < 4; i++) {
		free(matrix[i]);
	}
	free(matrix);

	return 0;
}