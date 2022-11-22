#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
	int stnum;
	char name[80];
	int kor, eng, math;
	int sum;
	double avg;
	char grade[4];
}student;

void sort_total(student a);

int main(void)
{
	student a[5] = {};
	int i = 0;
	int j, n = 0;
	for (i = 0; i < 5; i++)
	{
		printf("student number :");
		scanf_s("%d", &a[i].stnum);
		printf("Name :");
		scanf_s("%s", &a[i].name, 20);
		printf("Korean, English, Math score :");
		scanf_s("%d %d %d", &a[i].kor, &a[i].eng, &a[i].math);
		a[i].sum = a[i].kor + a[i].eng + a[i].math;
		a[i].avg = (double)a[i].sum / 3;


		if (a[i].avg >= 90 && a[i].avg <= 100)
			strcpy(a[i].grade, "A");
		else if (a[i].avg >= 80)
			strcpy(a[i].grade, "B");
		else if (a[i].avg >= 70)
			strcpy(a[i].grade, "C");
		else
			strcpy(a[i].grade, "F");
	}
	printf("\n");
	printf("Before sorting data..\n");
	for (i = 0; i < 5; i++)
	{

		printf("%d\t%s\t%d\t%d\t%d\t%d\t%.1lf\t%s\n", a[i].stnum, a[i].name, a[i].kor, a[i].eng, a[i].math, a[i].sum, a[i].avg, a[i].grade);
	}

	void sort_total(student a);
	{
		student temp;

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (a[i].sum > a[j].sum)
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		printf("After sorting data..\n");

		for (int i = 0; i < 5; i++)
		{
			printf("%d\t%s\t%d\t%d\t%d\t%d\t%.1lf\t%s\n", a[i].stnum, a[i].name, a[i].kor, a[i].eng, a[i].math, a[i].sum, a[i].avg, a[i].grade);
		}
	}
	return 0;
}