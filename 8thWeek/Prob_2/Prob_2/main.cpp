#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80]; //���ڿ� �Է��� �迭
	char res_str[80]; //���� ���ڿ��� ������ �迭
	const char* star = "**********"; //���� �κ��� ä�� ���ڿ�
	int len; //�Է� ���ڿ��� ���� ����
	printf("Enter a word : ");
	scanf_s("%s", str, 80);
	len = strlen(str); //�Է��� �ܾ��� ���� ���
	if (len <= 5)
	{
		strcpy(res_str, str);
	}
	else //5���� ũ��
	{
		strncpy(res_str, str, 5); //�ټ� ���ڸ� ����
		res_str[5] = '\0'; //�������� �� ���� ����
		strncat(res_str, star, len - 5); //���ڿ��� ���̸�ŭ ���� ä��
	}
	printf("words entered : %s\n,an omitted word : %s\n", str, res_str);
	return 0;
}