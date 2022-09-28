#include <stdio.h>

int main(void)
{
	int a, b;
	char four;
	printf("Input your arithmetic operation:\n");
	scanf_s("%d%c%d", &a, &four,1, &b);
	if (four == '+')
	{
		printf("%d+%d=%d\n", a, b, a + b);
	}
	else if (four == '-')
	{
		printf("%d-%d=%d\n", a, b, a - b);
	}
	else if (four == '*')
	{
		printf("%d*%d=%d\n", a, b, a * b);
	}
	else
	{
		printf("%d/%d=%d\n", a, b, a / b);
	}
	return 0;
}