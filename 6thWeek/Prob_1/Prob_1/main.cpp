#include <stdio.h>
#include <stdlib.h> //���� ���� ������ ���� srand ����� ���� ���
#include <time.h> //�ð��� ���� �޶����� ���� ���� ������ ���� ���
#define RAND_MAX 100 //�ִ� ���� ����
#define RAND_MIN 1  //�ּ� ���� ����
#define opportunity 5  //��ȸ
#define zero 0
#define one 1

int main(void)
{
	srand(time(NULL)); //���� ���� ���� �Լ�
	int chance = opportunity; //��ȸ 5�� ���� ����
	int answer; //���� �Է��� ��
	int num = rand() % RAND_MAX + RAND_MIN; //��ǻ�Ͱ� �������� ���� ��
	char retry=zero; //y Ȥ�� n���� ���ڷ� �Է��ϱ� ���� char�� ���� ����

	while (one) //���� �ݺ�
	{
		while (chance) //5�� ���������Ƿ� 5�� ���� �ݺ�
		{
			printf("Please enter a number(1~100):\n");
			printf("the remaining opportunity:%d\n", chance); //���� ��ȸ�� �����ֱ� ���� ���
			scanf_s("%d", &answer); //���ڸ� ����� ������ ���

			if (answer == num) 
			{
				printf("Answer!\n");
				break; //���� �Է��� ���� ��ǻ�Ͱ� �������� �� ���� ��ġ�ϸ� �극��ũ
			}
			else if (answer < RAND_MIN, answer>RAND_MAX)
			{
				printf("Error\n");
				break; //���� �ּ�,�ִ� ���� ������ ���� �Է� ���� �� Error ��� �� �극��ũ
			}
			else
			{
				printf("Wrong.\n");
			}
			if (answer > num) //���� �Է��� ���� ���� ���ں��� Ŭ ��
			{
				printf("Down\n");//down ���
				chance--; //��ȸ ����
			}
			else //���� �Է��� ���� ���� ���ں��� ���� ��
			{
				printf("Up\n"); //up ���
				chance--; //��ȸ ����
			}

			if (chance == zero) //��ȸ�� ���� ��
			{
				printf("You have used all of your opportunities.\n"); //��ȸ�� �� ����ߴٰ� ���
			}
		}
		printf("retry? press y or n\n");
		while (getchar() != '\n'); //scanf_s ���� �޵��� ���۸� �����
		scanf_s("%c", &retry); //����� �ϱ� ���� scanf_s
		if (retry == 'y') //if���� ����Ͽ� ���� �Է��� ���ڰ� y�� �´ٸ�
		{
			printf("retry the game\n"); //���� ����� ��� ��
			chance = 5; //��ȸ 5�� �ٽ� �ο�
		}
		else if (retry == 'n') //���� n�� �Է��Ѱ� �´ٸ�
		{
			printf("Shutting down a Program\n"); //���α׷� ���� ���
			break; //���α׷��� �����ϱ� ������ �극��ũ
		}
		else //���� �Է��� ���� y, n �Ѵ� �ƴϸ�
		{
			printf("Error press y or n\n");//Error press y or n ���
		}
	}
	return 0;
}
