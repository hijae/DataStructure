#include<stdio.h>

int main()
{
	int i;
	char *ptrArr[4] = { {"Korea"},{"Seoul"},{"Mapo"},{"15번지 2 / 3"} };
	for (i = 0; i < 4; i++)
	{
		printf("%s\n", ptrArr[i]);
	}
	ptrArr[2] = "Joungno";
	printf("\n\n");
	for (i = 0; i < 4; i++)
	{
		printf("%s\n", ptrArr[i]);
	}
	return 0;
}