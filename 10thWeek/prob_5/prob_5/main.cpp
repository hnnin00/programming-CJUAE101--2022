#include <stdio.h>

typedef struct cracker
{
	int price;
	int calories;
}cracker;

int main(void)
{
	cracker a1;

	printf("Enter the price and calories of the cracker : ");
	scanf_s("%d %d", &a1.price, &a1.calories);

	printf("price : %dwon\n",a1.price);
	printf("calories : %dkcal\n", a1.calories);

	return 0;
}