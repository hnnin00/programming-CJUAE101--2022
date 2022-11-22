#include <stdio.h>

typedef struct book //typedef를 처음에 사용
{
	char title[80];
	char author[30];
	int page;
	int price;
}book; //자료형 이름 book

void print_list(book* lp);

int main(void)
{
	book a[3] = { //책 3권이므로 배열3
		{"an irrevocable promise","Yakumaru Gaku",379,13500},
		{"The little Prince","Antoine de Saint-Exupery",153,7200},
		{"an uncomfortable convenience store","Kim Hoyeon",268,12600}
	};

	print_list(a);

	return 0;
}

void print_list(book* lp)
{
	int i;

	for (i = 0; i < 3; i++) //for문으로 i가 증가하면서 3번동안 반복하여 출력
	{
		printf("%10s%10s%10d%10d\n", (lp + i)->title, (lp + i)->author, (lp + i)->page, (lp + i)->price);
	}
}