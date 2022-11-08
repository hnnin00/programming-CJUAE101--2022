#include <stdio.h>
#include <stdlib.h> //랜덤 숫자 생성을 위해 srand 사용을 위한 헤더
#include <time.h> //시간에 따라 달라지는 랜덤 숫자 생성을 위한 헤더
#define RAND_MAX 100 //최대 랜덤 숫자
#define RAND_MIN 1  //최소 랜덤 숫자
#define opportunity 5  //기회
#define zero 0
#define one 1

int main(void)
{
	srand(time(NULL)); //랜덤 숫자 생성 함수
	int chance = opportunity; //기회 5로 변수 지정
	int answer; //내가 입력할 수
	int num = rand() % RAND_MAX + RAND_MIN; //컴퓨터가 랜덤으로 정할 수
	char retry=zero; //y 혹은 n으로 문자로 입력하기 위해 char로 변수 선언

	while (one) //무한 반복
	{
		while (chance) //5로 지정했으므로 5번 동안 반복
		{
			printf("Please enter a number(1~100):\n");
			printf("the remaining opportunity:%d\n", chance); //남은 기회를 보여주기 위해 출력
			scanf_s("%d", &answer); //숫자를 맞춰야 함으로 사용

			if (answer == num) 
			{
				printf("Answer!\n");
				break; //내가 입력한 수와 컴퓨터가 랜덤으로 준 수가 일치하면 브레이크
			}
			else if (answer < RAND_MIN, answer>RAND_MAX)
			{
				printf("Error\n");
				break; //랜덤 최소,최대 숫자 사이의 값을 입력 안할 시 Error 출력 후 브레이크
			}
			else
			{
				printf("Wrong.\n");
			}
			if (answer > num) //내가 입력한 수가 랜덤 숫자보다 클 때
			{
				printf("Down\n");//down 출력
				chance--; //기회 감소
			}
			else //내가 입력한 수가 랜덤 숫자보다 작을 때
			{
				printf("Up\n"); //up 출력
				chance--; //기회 감소
			}

			if (chance == zero) //기회가 없을 때
			{
				printf("You have used all of your opportunities.\n"); //기회를 다 사용했다고 출력
			}
		}
		printf("retry? press y or n\n");
		while (getchar() != '\n'); //scanf_s 값을 받도록 버퍼를 비워줌
		scanf_s("%c", &retry); //재시작 하기 위한 scanf_s
		if (retry == 'y') //if문을 사용하여 내가 입력한 문자가 y가 맞다면
		{
			printf("retry the game\n"); //게임 재시작 출력 후
			chance = 5; //기회 5번 다시 부여
		}
		else if (retry == 'n') //내가 n을 입력한게 맞다면
		{
			printf("Shutting down a Program\n"); //프로그램 종료 출력
			break; //프로그램을 종료하기 때문에 브레이크
		}
		else //내가 입력한 값이 y, n 둘다 아니면
		{
			printf("Error press y or n\n");//Error press y or n 출력
		}
	}
	return 0;
}
