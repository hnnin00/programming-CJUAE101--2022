#include <stdio.h>
#include <string.h> //strcmp�� ���� ���� ���
#define password "0827" //0827�� password�� ����

int main(void)
{
	char pw[5] = password; //�迭 ũ�� 5�� ����
	char answer[5];
	printf("int put your password\n");
	scanf_s("%s", answer, 5);

	while (1) //��й�ȣ ���� ������ �ݺ�
	{
		if (strcmp(pw, answer) == 0) 
			break;   //pw�� answer�� ��ġ�� �� �극��ũ
		printf("not matched, retry..\n");
		scanf_s("%s", answer, 5);
	}
	printf("normal termination..\n");
	return 0;
}