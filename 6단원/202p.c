#include <stdio.h>

int main(void)
{
	int i = 1;
	int sum = 0;

	while (i <= 100)
	{
		if ((i % 3) == 0)
		{
			continue;
		}
		sum += i;
		i++;
	}
	
	return 0;
}