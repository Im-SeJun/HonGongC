#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student
{
	int num;
	char name[20];
	int kor, eng, math, total;
	double avg;
	char grade[20];
};

int main(void)
{
	struct student s[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("학번 : ");
		scanf("%d", &s[i].num);
		printf("이름 : ");
		scanf("%s", &s[i].name);
		printf("국어, 영어, 수학 점수 : ");
		scanf("%d %d %d", &s[i].kor, &s[i].eng, &s[i].math);
	}

	for (i = 0; i < 5; i++)
	{
		s[i].avg = (s[i].kor + s[i].eng + s[i].math) / 3.0;
		s[i].total = s[i].kor + s[i].eng + s[i].math;
		if (s[i].avg >= 90)
		{
			strcpy(s[i].grade, "A");
		}
		else if (s[i].avg >= 80)
		{
			strcpy(s[i].grade, "B");
		}
		else if (s[i].avg >= 70)
		{
			strcpy(s[i].grade, "C");
		}
		else
		{
			strcpy(s[i].grade, "F");
		}
	}

	printf("# 정렬 전 데이터...\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\t%s\t%d\t%d\t%d\t%d\t%.1lf\t%s\n", s[i].num, s[i].name, s[i].kor, s[i].eng, s[i].math, s[i].total, s[i].avg, s[i].grade);
	}

	struct student temp;
	int j, max;

	for (i = 0; i < 4; i++)
	{
		max = i;
		for (j = i + 1; j < 5; j++)
		{
			if (s[j].avg > s[max].avg)
			{
				max = j;
			}
		}

		temp = s[i];
		s[i] = s[max];
		s[max] = temp;
	}

	printf("# 정렬 후 데이터...\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\t%s\t%d\t%d\t%d\t%d\t%.1lf\t%s\n", s[i].num, s[i].name, s[i].kor, s[i].eng, s[i].math, s[i].total, s[i].avg, s[i].grade);
	}

	return 0;
}