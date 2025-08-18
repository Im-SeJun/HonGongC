#include <stdio.h>

int main(void)
{
	int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;

	printf("--------------------------------------------\n");
	printf("변수\t변숫값\t&연산\t*연산\t**연산\n");
	printf("a\t%12d\t%12u\n", a, &a);
	printf("pi\t%12u\t%12u\t%12d\n", pi, &pi, *pi);
	printf("ppi\t%12u\t%12u\t%12u\t%12u\n", ppi, &ppi, *ppi, **ppi);
	printf("--------------------------------------------\n");

	return 0;
}