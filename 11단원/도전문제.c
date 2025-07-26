#include <stdio.h>

int main(void)
{
	int current = 0, max = 0;
	char ch;

	while (1)
	{
		ch = getchar();
		if (ch == -1) break;
		
		if (ch == '\n')
		{
			if (current > max)
			{
				max = current;
				current = 0;
			}
		}
		else
		{
			current++;
		}
	}

	printf("가장 긴 단어의 길이 : %d", max);

	return 0;
}