#include <stdio.h>

void input_data(int* pa, int* pb);
void swap_data(void);
void print_data(int a, int b);

int a, b;

int main(void)
{
	input_data(&a, &b); //전역 변수에 정수 값 입력
	swap_data();  //두 변수 교환
	print_data(a, b); //교환된 변숫값 출력

	return 0;
}
void input_data(int* pa, int* pb)
{
	printf("Enter two integers : ");
	scanf_s("%d%d", pa, pb);
}
void swap_data(void)
{
	int temp; //임시로 저장할 변수

	temp = a;
	a = b;
	b = temp;
}
void print_data(int a,int b)
{
	printf("two intergers output : %d, %d\n", a, b);
}
