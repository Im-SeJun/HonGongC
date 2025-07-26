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

	printf("���� �� �ܾ��� ���� : %d", max);

	return 0;
}