#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main(void)
{
	double max, mid, min;

	printf("실수값 3개 입력 : ");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp)
{
	if (*maxp < *midp)
	{
		swap(maxp, midp);
	}
	if (*maxp < *minp)
	{
		swap(maxp, minp);
	}
	if (*midp < *minp)
	{
		swap(midp, minp);
	}

}
/*
1. if 문 순서 언제나 내림차순으로 해야됨 한 번만 비교하는게 아니라 여러번 비교해야 하기 때문

2. if로 비교할 땐 간접참조연산자 *로 그 값을 비교
	(포인터가 가리키는 실수 값 끼리 비교하라는 뜻)
3. swap 함수 호출할 땐 * 안 씀
	여기서는 주소를 넘기는 거니까
*/