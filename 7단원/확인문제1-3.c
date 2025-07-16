#include <stdio.h>

double centi_to_meter(int a);

int main(void)
{
	double res;

	res = centi_to_meter(187);
	printf("%.2lfm\n", res);

	return 0;
}

double centi_to_meter(int a)
{
	double b;

	b = a / 100.0;

	return b;
}