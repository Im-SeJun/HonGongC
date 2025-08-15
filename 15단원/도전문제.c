#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swap(const char* type, void* p1, void* p2);

int main(void)
{
    int age1, age2;
    double height1, height2;

    printf("첫 번째 사람의 나이와 키 입력 : ");
    scanf("%d %lf", &age1, &height1);

    printf("두 번째 사람의 나이와 키 입력 : ");
    scanf("%d %lf", &age2, &height2);

    swap("int", &age1, &age2);
    swap("double", &height1, &height2);

    printf("첫 번째 사람의 나이와 키 : %d, %.1lf\n", age1, height1);
    printf("두 번째 사람의 나이와 키 : %d, %.1lf\n", age2, height2);

    return 0;
}

void swap(const char* type, void* p1, void* p2)
{
    if (strcmp(type, "int") == 0)
    {
        int temp = *(int*)p1;
        *(int*)p1 = *(int*)p2;
        *(int*)p2 = temp;
    }
    else if (strcmp(type, "double") == 0)
    {
        double temp = *(double*)p1;
        *(double*)p1 = *(double*)p2;
        *(double*)p2 = temp;
    }
}