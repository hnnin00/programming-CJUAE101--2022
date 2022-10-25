#include <stdio.h>
#include <string.h> //strcmp를 쓰기 위한 헤더
#define password "0827" //0827를 password로 지정

int main(void)
{
	char pw[5] = password; //배열 크기 5로 지정
	char answer[5];
	printf("int put your password\n");
	scanf_s("%s", answer, 5);

	while (1) //비밀번호 맞힐 때까지 반복
	{
		if (strcmp(pw, answer) == 0) 
			break;   //pw와 answer가 일치할 시 브레이크
		printf("not matched, retry..\n");
		scanf_s("%s", answer, 5);
	}
	printf("normal termination..\n");
	return 0;
}