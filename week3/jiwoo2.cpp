#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	char c;
	printf("���� �Է��ϼ���(ex. 7 + 4) :");
	scanf("%d %c %d", &a, &c, &b);

	if (c == '+')
	{
		printf("%d", a + b);
	}
	else if (c == '-')
	{
		printf("%d", a - b);
	}
	else if (c == '*')
	{
		printf("%d", a * b);
	}
	else if (c == '%')
	{
		printf("%d", a % b);
	}
	else if (c == '/')
	{
		printf("%d", a / b);
	}


	return 0;

}