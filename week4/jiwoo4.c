#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, sum = 0;
	printf("1~10���� ����ϱ�\n");
	for (i = 1; i <= 10; i++)
		printf("%d ", i);



	int a;
	printf("\n");
	printf("\n����� �� : ");
	scanf("%d", &a);
	printf("\n===%d��===\n", a);
	for (i = 1; i < 10; i++)
		printf("%d * %d = %d\n", a, i, a * i);


	printf("\n1~10������ �� ���ϱ�\n");
	for (i = 1; i <= 10; i++)
		sum += i;
	printf("%d ", sum);


	return 0;


}