#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("���� : ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("\"%d��(��) ����Դϴ�.", a);
        printf("�� ���� ������ %d�̰�,", a);
        b = a / 4;
        printf(" \n   ������ 4�� ���� ���� %d�̰�,", b);
        c = a % 4;
        printf(" \n      �������� %d�Դϴ�.\"", c);
    }
    else
    {
        printf("\"%d��(��) �����Դϴ�.", a);
        a = -a;
        printf("�� ���� ������ %d�̰�,", a);
        b = a / 4;
        printf("\n   ������ 4�� ���� ���� %d�̰�,", b);
        c = a % 4;
        printf("\n      �������� %d�Դϴ�.\"", c);
    }

    return 0;

}