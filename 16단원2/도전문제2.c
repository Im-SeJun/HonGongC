#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, i, j, num, rows, count = 0;
    int** matrix;

    printf("양수 입력 : ");
    scanf("%d", &a);

    rows = (a + 4) / 5;
    matrix = (int**)malloc(rows * sizeof(int*));
    for (i = 0; i < rows; i++) 
    {
        matrix[i] = (int*)malloc(5 * sizeof(int));
    }

    num = 2;
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < 5; j++) 
        {
            if (num <= a) 
            {
                int isPrime = 1;
                for (int k = 2; k * k <= num; k++) 
                {
                    if (num % k == 0) 
                    {
                        isPrime = 0;
                        break;
                    }
                }
                if (isPrime) matrix[i][j] = num;
                else matrix[i][j] = -1;
                num++;
            }
            else 
            {
                matrix[i][j] = -1;
            }
        }
    }

    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < 5; j++) 
        {
            if (matrix[i][j] == -1) printf("%5s", "X");
            else printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++) free(matrix[i]);
    free(matrix);

    return 0;
}