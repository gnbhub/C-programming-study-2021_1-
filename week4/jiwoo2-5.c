#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int i, j = 1;
    for (i = 1; i <= 10; i++)
    {
        printf("%2d�� ����� ", i);
        for (j = 1; j <= i; j++)
        {

            if (i % j == 0)
                printf("%d ", j);
        }
        printf("\n");
    }

    return 0;

}
