#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, b, c, d;
    
    printf("��1�� x��ǥ : ");
    scanf("%d", &a);
    printf("��1�� y��ǥ : ");
    scanf("%d", &b);
    printf("��2�� x��ǥ : ");
    scanf("%d", &c);
    printf("��2�� y��ǥ : ");
    scanf("%d", &d);

    float l, h;

    if (a == c || b == d)
    {
        printf("���簢���� �ƴմϴ�.");
    }
    else

        if (a > c) {
            l = a - c;
        }
        else {
            l = c - a;
        }

        if (b > d) {
            h = b - d;
        }
        else {
            h = d - b;
        }

        printf("�ѷ��� ���� : %f\n",2*l+2*h);
        printf("�밢���� ���� : %f\n", sqrt(l * l + h * h));
        printf("���� : %f\n", l * h);

        return 0;

}