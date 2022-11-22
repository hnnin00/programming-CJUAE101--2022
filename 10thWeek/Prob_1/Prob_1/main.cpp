#include <stdio.h>
#include <stdlib.h>
void saveData(int* minority, int nMax);
void printData(int* minority, int nMax);

int main(void)
{
	int* minority;
	int nMax;
	printf("Enter the positive number :");
	scanf_s("%d", &nMax);
	minority = (int*)calloc(nMax, sizeof(int));
	saveData(minority, nMax);
	printData(minority, nMax);
	return 0;
}
void saveData(int* minority, int nMax)
{
	int i,j;
	for (i = 0; i < nMax; i++)
	{
		minority[i] = 0;
	}
	for (i = 2; i < nMax; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
		{
			minority[i - 2] = i; //i가 2부터 시작하기 때문에 i-2
		}
	}
}
void printData(int* minority, int nMax)
{
	int i;

	for (i = 0; i < nMax; i++)
	{
		if (minority[i] == 0)
		{
			printf("x\t");
		}
		else
		{
			printf("%d\t", minority[i]);
		}
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
}