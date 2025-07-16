#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int kg;
	double cm, BMI;
	
	/* BMI = kg / ((cm / 100.0) * (cm / 100.0));
	여기다가 bmi 쓰면 쓰레기값으로 계산함 따라서 입력 받고 나서 그 밑에 계산 식이 나와야 됨*/

	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf("%d%lf", &kg, &cm);

	BMI = kg / ((cm / 100.0) * (cm / 100.0));

	(BMI >= 20.0) && (BMI < 25) ? printf("표준입니다.") : printf("체중관리가 필요합니다.");

	return 0;
}