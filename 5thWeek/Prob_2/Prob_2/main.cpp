#include <stdio.h>
#include <stdlib.h> //������ �Լ� ����ϱ� ���� ���
#include <time.h> //�ð��� ���� ������ �Լ� ���� ���
#include <math.h> //ǥ������ ���� �� sqrt�� ����ϱ� ���� ���

#define RAND_MAX 100 //���� ���� �ִ� ũ�⸦ 100���� ����

int main(void)
{
	srand(time(NULL));//���� ���� ����
	int i;
	int a[10];
	int sum = 0;//�� ����
	double avg, zero, var, std = 0;//�Ҽ������� ���� �� �ֱ� ������ double ���

	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % RAND_MAX; //�迭 �ȿ� ���� ���� ���
	}
	for (i = 0; i < 10; i++)
	{
		printf("%3d", a[i]);
		sum += a[i]; //���,�л�,ǥ�������� ���ϱ� ���� �迭�� �������� �ջ�
	}
	avg = sum / 10; 
	for (i = 0; i < 10; i++)
	{
		sum += (a[i] - avg) * (a[i] - avg); //�л� ���� �� sum�� ����
	}
	var = sum / 10;
	for (i = 0; i < 10; i++)
	{
		sum += sqrt((a[i] - avg) * (a[i] - avg));//sqrt����Ͽ� ǥ������ ���ϴ� ���� sum�� ����
	}
	std = sqrt(var);
	printf("\n");
	printf("Average:%.1f\n", avg);//�Ҽ��� ���ڸ������� ���� ���� .1f
	printf("Variance:%.1f\n", var);//               ""
	printf("Standard deviation:%.1f\n", std);//     ""
	return 0;
}