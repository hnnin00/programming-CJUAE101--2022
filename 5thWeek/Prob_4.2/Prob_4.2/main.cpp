#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RAND_MAX 10

int main(void)
{
	srand(time(NULL));
	int a[10];//a배열
	int* p;//포인터 선언
	int i, j;
	int temp;//임시적으로 저장할 변수
	p = a;//a를 포인터에 대입
	printf("Random interger:\n");
	for (i = 0; i < 10; i++)
	{
		p[i] = rand() % RAND_MAX; //무작위 정수를 포인터에 대입
		printf("%2d", p[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (p[i] < p[j])//만약 두 정수중에 [j]가 크다면
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}//위치 변경
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
			if (p[i] > p[j])//만약 두 정수중에 [i]가 크다면
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}//위치 변경
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%2d", p[i]);
	}
	return 0;
}