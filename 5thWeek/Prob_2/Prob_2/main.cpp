#include <stdio.h>
#include <stdlib.h> //무작위 함수 사용하기 위한 헤더
#include <time.h> //시간에 따라 무작위 함수 생성 헤더
#include <math.h> //표준편차 구할 때 sqrt를 사용하기 위한 헤더

#define RAND_MAX 100 //랜덤 숫자 최대 크기를 100으로 지정

int main(void)
{
	srand(time(NULL));//랜덤 숫자 생성
	int i;
	int a[10];
	int sum = 0;//값 저장
	double avg, zero, var, std = 0;//소수점으로 나올 수 있기 때문에 double 사용

	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % RAND_MAX; //배열 안에 랜덤 숫자 사용
	}
	for (i = 0; i < 10; i++)
	{
		printf("%3d", a[i]);
		sum += a[i]; //평균,분산,표준편차를 구하기 위해 배열의 정수들을 합산
	}
	avg = sum / 10; 
	for (i = 0; i < 10; i++)
	{
		sum += (a[i] - avg) * (a[i] - avg); //분산 구한 값 sum에 저장
	}
	var = sum / 10;
	for (i = 0; i < 10; i++)
	{
		sum += sqrt((a[i] - avg) * (a[i] - avg));//sqrt사용하여 표준편차 구하는 값을 sum에 저장
	}
	std = sqrt(var);
	printf("\n");
	printf("Average:%.1f\n", avg);//소수점 한자리까지만 보기 위해 .1f
	printf("Variance:%.1f\n", var);//               ""
	printf("Standard deviation:%.1f\n", std);//     ""
	return 0;
}