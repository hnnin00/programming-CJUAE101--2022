#include <stdio.h>

#define MINCHESTSIZE 90
#define MAXCHESTSIZE 100

int main(void)
{
	int inChestSize = 0;
	char chChestSize;

	printf("Input your chest size:\n");
	scanf_s("%d", &inChestSize);

	if (inChestSize <= MINCHESTSIZE)
	{
		chChestSize = 'S';
	}
	else if ((inChestSize > MINCHESTSIZE) && (inChestSize <= MAXCHESTSIZE))
	{
		chChestSize = 'M';
	}
	else 
	{
		chChestSize = 'L';
	}
	printf("Your ChestSize is %c", chChestSize);

	return 0;
}