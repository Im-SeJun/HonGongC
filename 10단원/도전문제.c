#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}

void input_nums(int* lotto_nums)
{
	int i, j, k;

	for (i = 0; i < 6; i++)
	{
		printf("��ȣ �Է� : ");
		scanf("%d", lotto_nums + i);
		if (lotto_nums[i] < 1 || lotto_nums[i] > 45)
		{
			printf("1~45 ���� �Է�\n");
			i--;
			continue;
		}
		for (j = 0; j < i; j++)
		{
			if (lotto_nums[j] == lotto_nums[i])
			{
				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
				i--;
				break;
			}
		}
	}
}

void print_nums(int* lotto_nums)
{
	int i;

	printf("�ζ� ��ȣ : ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);
	}
}