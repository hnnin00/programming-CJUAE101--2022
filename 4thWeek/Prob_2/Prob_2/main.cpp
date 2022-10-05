#include <stdio.h>

int main(void)
{
	int num;
	int i, j;
	int mn;
	int wn = 0;

	printf("Enter an integer greater than or equal to 2 : ");
	scanf_s("%d", &num);

	for (i = 2; i <= num; i++)
	{
		mn = 1;
		for (j = 2; j < i; j++)
		{
			if ((i % j) == 0)
			{
				mn = 0;
				break;
			}
		}
		if (mn == 1)
		{
			printf("%5d", i);
			wn++;
			if ((wn % 5) == 0)
			{
				printf("\n");
			}
		}
	}
	return 0;
}