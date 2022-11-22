#include <stdio.h>

struct marriage
{
	char name[20]; //이름을 저장할 멤버
	int age;       //나이를 저장할 멤버
	char sex;      //성별을 저장할 멤버,남성'm',여성'f'저장
	double height; //키를 저장할 멤버
};
int main(void)
{
	struct marriage m1 = { "Andy",22,'m',187.5 };
	struct marriage* mp = &m1;

	printf("이름 :%s  ", mp->name);
	printf("나이 :%d  ", mp->age);
	printf("성별 :%c  ", mp->sex);
	printf(" 키  :%.1lf  ",mp->height);
	return 0;
}