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

/*
while문으로 문자열 입력 -> 문자 하나씩 버퍼에서 가져옴
그 다음 문자열로 가서 문자 하나씩 반복
*/