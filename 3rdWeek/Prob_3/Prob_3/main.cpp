#include <stdio.h>

int main(void)
{
	int A = 0;
	int B = 0;
	char four;

	printf("Input your arithmetic operation : \n");
	scanf_s("%d%c%d", &A, &four,1, &B);

	printf(" % d % c % d\n", A, four, B);
	switch (four)
	{
	case '+':
	{
		int res = A + B;
		printf(" % d % c % d=%d\n", A, four, B, res);
		break;
	}
	case '-':
	{
		int res = A - B;
		printf("%d%c%d=%d\n", A, four, B, res);
		break;
	}
	case '*':
	{
		int res = A * B;
		printf(" % d % c % d=%d\n", A, four, B, res);
		break;
	}
	case '/':
	{
		int res = A / B;
		printf("%d%c%d=%d\n", A, four, B, res);
		break;
	}
	default:
	{
		printf("Error:you should check your input...\n");
		break;
	}
	}
	return 0;
}