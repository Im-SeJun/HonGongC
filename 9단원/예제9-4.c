#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;

	printf("변수 a 값 : %d\n", *pa);
	pa = &b;
	printf("변수 b 값 : %d\n", *pa);
	pa = &a;
	a = 20;
	printf("변수 a 값 : %d\n", *pa);

	return 0;
}

/* 
const로는 가리키는 대상의 값을 바꿀 수 없음
ex)
*pa = 20; 이거 불가능..
마찬가지로
const int a = 10;
a = 20; 불가능

==> 상수화 const
*/