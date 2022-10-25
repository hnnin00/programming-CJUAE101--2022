#include <stdio.h>
#include <stdlib.h>//������ ���� ������ ���� ���
#include <time.h>//�ð��� ���� ������ �޸� �ϴ� ���

#define RAND_MAX 10//�ִ� ������ ������ 10���� ����

int main(void)
{
	srand(time(NULL));//������ ���� ����
	int a[10];
	int i, j;
	int temp;//�ӽ÷� ������ ����
	printf("Random integer:\n");
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % RAND_MAX;//������ ������ a�迭�� ����
		printf("%2d", a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] < a[j])//�� ������ [j]�� ũ�ٸ�
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}//��ġ ����
		}
	}
	printf("\n\nascending order:");
	for (i = 0; i < 10; i++)
	{
		printf("%2d", a[i]);
	}
	printf("\n\ndescending order:");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] > a[j])//�� ������ [i]�� ũ�ٸ�
			{
				temp = a[i]; //temp�� ����
				a[i] = a[j];
				a[j] = temp;
			}//��ġ ����
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%2d", a[i]);
	}
	return 0;
}