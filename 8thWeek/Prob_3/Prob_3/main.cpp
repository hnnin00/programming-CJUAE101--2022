#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char str1[20] = {}, str2[20] = {}, str3[20] = {}; //�� �ܾ� �迭
	char temp[20]; //�ӽ÷� ������ ����
	printf("Enter 3 words :");
	scanf("%s%s%s", str1, str2, str3);
	
	if (strcmp(str1, str2) > 0) //str1�� str2���� ������ �ڿ� ������ �� ���ڿ��� �ٲ۴�
	{
		strcpy(temp, str1);
		strcpy(str1, str2);
		strcpy(str2, temp);
	}
	if (strcmp(str1, str3) > 0)//st1�� str3���� ������ �ڿ� ������ �� ���ڿ��� �ٲ۴�
	{
		strcpy(temp, str1);
		strcpy(str1, str3);
		strcpy(str3, temp);
	}
	if (strcmp(str2, str3) > 0) //st2�� str3���� ������ �ڿ� ������ �� ���ڿ��� �ٲ۴�
	{
		strcpy(temp, str2);
		strcpy(str2, str3);
		strcpy(str3, temp);
	}
	printf("%s\t%s\t%s", str1, str2, str3);

	return 0;
}