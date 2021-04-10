#include<stdio.h>
#include<string.h>

struct User
{
	char name[30];
	char number[30];
	char address[30];
	char birthday[30];
};
int n = 0;
struct User user[100];

void all();
void add();
void del();
void ser();


int main()
{
	struct User user[1000];
	int t,i, j;
	char arr[30];
	while (1)
	{
		printf("1. 목록보기, 2. 추가하기, 3.탐색하기, 4. 삭제하기\n");
		scanf("%d",&t);
		if (t == 1)
		{
			if (n == 0)
			{
				printf("no person\n");
			}
			else
			{
				printf("이름  전화번호  주소  생일\n");
				for (i = 0; i < n; i++)
				{
					printf("%s %s %s %s\n", user[i].name, user[i].number, user[i].address, user[i].birthday);
				}
			}
		}
		else if (t == 2)
		{
			scanf("%s %s %s %s", user[n].name, user[n].number, user[n].address, user[n].birthday);
			n++;
		}
		else if (t == 3)
		{
			printf("name: ");
			scanf("%s", &arr);
			for (i = 0; i < n; i++)
			{
				if (strcmp(user[i].name, arr) == 0)
				{
					printf("%s %s %s %s\n", user[i].name, user[i].number, user[i].address, user[i].birthday);
					break;
				}
				else if (i == n - 1)
				{
					printf("no person\n");
				}
			}
		}
		else if (t == 4)
		{
			char arr[30];
			printf("name: ");
			scanf("%s", &arr);
			for (i = 0; i < n; i++)
			{
				if (strcmp(user[i].name, arr)==0)
				{
					for (j = i; j <=n+1; j++)
					{
						strcpy(user[j - 1].name, user[j].name);
						strcpy(user[j - 1].number, user[j].number);
						strcpy(user[j - 1].address, user[j].address);
						strcpy(user[j - 1].birthday, user[j].birthday);
					}
					n--;
					break;
				}
			}
		}
		else
		{
			printf("no code\n");
		}
		getchar();
	}
	return 0;
}
