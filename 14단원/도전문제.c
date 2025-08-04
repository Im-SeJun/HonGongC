#include <stdio.h>

int main(void)
{
	int ary[5][6] = { 0 };
	int* pary[5] = { ary[0], ary[1], ary[2], ary[3], ary[4] };
	int i, j;
	int num = 1;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			ary[i][j] = num++;
		}
	}

	
	for (i = 0; i < 4; i++)
	{
		int sum = 0;
		for (j = 0; j < 5; j++)
		{
			sum += ary[i][j];
		}
		ary[i][5] = sum;
	}

	for (i = 0; i < 5; i++)
	{
		int sum2 = 0;
		for (j = 0; j < 4; j++)
		{
			sum2 += ary[j][i];
		}
		ary[4][i] = sum2;
	}

	for (i = 0; i < 4; i++)
	{
		int sum3 = 0;
		ary[4][5] += ary[i][5];
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%5d", ary[i][j]);
		}
		printf("\n");
	}

	return 0;
}