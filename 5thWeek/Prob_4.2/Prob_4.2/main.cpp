#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RAND_MAX 10

int main(void)
{
	srand(time(NULL));
	int a[10];//a�迭
	int* p;//������ ����
	int i, j;
	int temp;//�ӽ������� ������ ����
	p = a;//a�� �����Ϳ� ����
	printf("Random interger:\n");
	for (i = 0; i < 10; i++)
	{
		p[i] = rand() % RAND_MAX; //������ ������ �����Ϳ� ����
		printf("%2d", p[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (p[i] < p[j])//���� �� �����߿� [j]�� ũ�ٸ�
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}//��ġ ����
		}
	}
	printf("\n\nascending order:");
	for (i = 0; i < 10; i++)
	{
		printf("%2d", p[i]);
	}
	printf("\n\ndescending order:");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (p[i] > p[j])//���� �� �����߿� [i]�� ũ�ٸ�
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}//��ġ ����
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%2d", p[i]);
	}
	return 0;
}