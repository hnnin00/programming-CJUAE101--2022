#include <stdio.h>
#include <stdlib.h>//무작위 정수 생성을 위한 헤더
#include <time.h>//시간에 따라 정수를 달리 하는 헤더

#define RAND_MAX 10//최대 무작위 정수를 10으로 지정

int main(void)
{
	srand(time(NULL));//무작위 정수 생성
	int a[10];
	int i, j;
	int temp;//임시로 저장할 변수
	printf("Random integer:\n");
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % RAND_MAX;//무작위 정수를 a배열에 대입
		printf("%2d", a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] < a[j])//두 정수중 [j]가 크다면
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}//위치 변경
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
			if (a[i] > a[j])//두 정수중 [i]가 크다면
			{
				temp = a[i]; //temp에 저장
				a[i] = a[j];
				a[j] = temp;
			}//위치 변경
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%2d", a[i]);
	}
	return 0;
}