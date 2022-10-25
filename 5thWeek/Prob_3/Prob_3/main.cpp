#include <stdio.h>
#include <stdlib.h>//무작위 정수를 생성하기 위한 헤더
#include <time.h>//시간에 따라 정수를 다르게 생성하기 위한 헤더

#define RAND_MAX 9 //최대 무작위 정수를 9로 지정

int main(void)
{
	srand(time(NULL));//무작위 생성
	int a[3][4] = {};//3*4 행렬 배열로 지정
	int b[4][3] = {};//4*3 행렬 배열로 지정
	int c[3][3] = {};//행렬 a*b는 3*3행렬
	int i, j, k;
	printf("A procession\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			a[i][j] = rand() % RAND_MAX;//a행렬에 무작위 정수 대입
			printf("%2d", a[i][j]);
		}
		printf("\n");//행렬 시각화
	}
	printf("B procession\n");
	for (i = 0; i < 4; i++)
	{
		for (k = 0; k < 3; k++)
		{
			b[i][k] = rand() % RAND_MAX;//b행렬에 무작위 정수 대입
			printf("%2d", b[i][k]);
		}
		printf("\n");//행렬 시각화
	}
	printf("A*B procession:\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				c[i][j] += a[i][k] * b[k][j];//a*b행렬을 c행렬에 저장
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%4d", c[i][j]);
		}
		printf("\n");//행렬 시각화
	}
	return 0;
}