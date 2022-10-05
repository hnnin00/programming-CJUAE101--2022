#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	if (b == 0)
	{
		printf("You can't divide it by zero");
			return 0;
	}
	return a / b;
}
int res(int a, int b)
{
	return a % b;
}

int main(void)
{
	int a, b;
	printf("Enter an integer value");
	scanf_s("%d %d", &a, &b);
	printf("add: %d+%d=%d\n", a, b, add(a,b));
	printf("sub: %d-%d=%d\n", a, b, sub(a,b));
	printf("mul: %d*%d=%d\n", a, b, mul(a,b));
	printf("div: %d/%d=%d\n", a, b, div(a,b));
	printf("res: %d£¥%d=%d\n", a, b, res(a, b));
	return 0;
}