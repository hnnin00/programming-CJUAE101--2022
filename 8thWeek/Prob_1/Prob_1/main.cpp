#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];
	strcpy(str, "wine"); //str 배열에 wine 복사
	strcat(str, "apple"); //wine 뒤에 apple을 붙인다.
	strncpy(str, "pear", 1); //문자열 pear에서 첫 번째 문자만 str에 복사
	// 복사 후 널 문자를 붙이지 않으므로 wineapple->pineapple
	printf("%s, %d\n", str, strlen(str)); //str 배열의 문자열과 그 길이를 구해 출력
	return 0;
}