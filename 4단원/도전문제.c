#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int kg;
	double cm, BMI;
	
	/* BMI = kg / ((cm / 100.0) * (cm / 100.0));
	����ٰ� bmi ���� �����Ⱚ���� ����� ���� �Է� �ް� ���� �� �ؿ� ��� ���� ���;� ��*/

	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%d%lf", &kg, &cm);

	BMI = kg / ((cm / 100.0) * (cm / 100.0));

	(BMI >= 20.0) && (BMI < 25) ? printf("ǥ���Դϴ�.") : printf("ü�߰����� �ʿ��մϴ�.");

	return 0;
}