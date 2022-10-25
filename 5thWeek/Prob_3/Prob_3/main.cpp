#include <stdio.h>
#include <stdlib.h>//������ ������ �����ϱ� ���� ���
#include <time.h>//�ð��� ���� ������ �ٸ��� �����ϱ� ���� ���

#define RAND_MAX 9 //�ִ� ������ ������ 9�� ����

int main(void)
{
	srand(time(NULL));//������ ����
	int a[3][4] = {};//3*4 ��� �迭�� ����
	int b[4][3] = {};//4*3 ��� �迭�� ����
	int c[3][3] = {};//��� a*b�� 3*3���
	int i, j, k;
	printf("A procession\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			a[i][j] = rand() % RAND_MAX;//a��Ŀ� ������ ���� ����
			printf("%2d", a[i][j]);
		}
		printf("\n");//��� �ð�ȭ
	}
	printf("B procession\n");
	for (i = 0; i < 4; i++)
	{
		for (k = 0; k < 3; k++)
		{
			b[i][k] = rand() % RAND_MAX;//b��Ŀ� ������ ���� ����
			printf("%2d", b[i][k]);
		}
		printf("\n");//��� �ð�ȭ
	}
	printf("A*B procession:\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				c[i][j] += a[i][k] * b[k][j];//a*b����� c��Ŀ� ����
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%4d", c[i][j]);
		}
		printf("\n");//��� �ð�ȭ
	}
	return 0;
}