#include<stdio.h>
void main()
{
	int i, n[10], l[10], e[10], m[10], sum[10], avg[10];
	printf("학번 국어 영어 수학 총점 평균 입력\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d %d %d %d", &n[i], &l[i], &e[i], &m[i]);
		sum[i] = l[i] + e[i] + m[i];
		avg[i] = sum[i] / 3;
	}
	printf(" 학번 국어 영어 수학 총점 평균\n");
	printf("********************************\n");
	for (i = 0; i < 10; i++)
	{
		printf("%3d %3d %3d %3d %3d %3d\n", n[i], l[i], e[i], m[i], sum[i], avg[i]);
	}
	return;
}