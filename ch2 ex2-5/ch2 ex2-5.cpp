#include<stdio.h>
int main()
{
	int i, leng = 0;
	char str[50];
	printf("\n문자열을 입력하세요 : ");
	gets_s(str);
	printf("\n입력된 문자열은 \n \"");
	for (i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
		leng+=1;
	}
	printf("\" \n입니다.");
	printf("\n\n입력된 문자열의 길이 = %d \n", leng);
	return 0;
}