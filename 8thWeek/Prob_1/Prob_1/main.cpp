#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];
	strcpy(str, "wine"); //str �迭�� wine ����
	strcat(str, "apple"); //wine �ڿ� apple�� ���δ�.
	strncpy(str, "pear", 1); //���ڿ� pear���� ù ��° ���ڸ� str�� ����
	// ���� �� �� ���ڸ� ������ �����Ƿ� wineapple->pineapple
	printf("%s, %d\n", str, strlen(str)); //str �迭�� ���ڿ��� �� ���̸� ���� ���
	return 0;
}