#include <stdio.h>

int rec_func(int n);

int main(void)
{
	int a = 0;
	a = rec_func(1);
	printf("%d", a);
	return 0;
}

int rec_func(int n)
{
	if (n == 10)return 10;
	return rec_func(n + 1) + n;
}