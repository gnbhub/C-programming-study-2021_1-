#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int R;
	printf("����: ");
	scanf("%d", &R);

	if (R >= 0)
	{
		printf("\n\"%d��(��) ����Դϴ�. �� ���� ������ %d�̰�,", R, R);
		printf("\n	������ 4�� ���� ���� %d�̰�", R / 4);
		printf("\n		�������� %d�Դϴ�.\"", R % 4);
	}
	else
	 {
		printf("\n\"%d��(��) �����Դϴ�. �� ���� ������ %d�̰�,", R, -R);
		printf("\n	������ 4�� ���� ���� %d�̰�", -R / 4);
		printf("\n		�������� %d�Դϴ�.\"", -R % 4);
	 }
	return 0;
}