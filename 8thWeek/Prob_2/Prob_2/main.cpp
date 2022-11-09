#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80]; //문자열 입력할 배열
	char res_str[80]; //생략 문자열을 저장할 배열
	const char* star = "**********"; //생략 부분을 채울 문자열
	int len; //입력 문자열의 길이 보관
	printf("Enter a word : ");
	scanf_s("%s", str, 80);
	len = strlen(str); //입력한 단어의 길이 계산
	if (len <= 5)
	{
		strcpy(res_str, str);
	}
	else //5보다 크면
	{
		strncpy(res_str, str, 5); //다섯 문자만 복사
		res_str[5] = '\0'; //마지막에 널 문자 저장
		strncat(res_str, star, len - 5); //문자열의 길이만큼 별로 채움
	}
	printf("words entered : %s\n,an omitted word : %s\n", str, res_str);
	return 0;
}