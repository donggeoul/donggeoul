#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cstring>

int main()
{
	char password[] = "1234";
	char user[10];

	printf("Please enter your PIN number.\n");
	while (1)
	{
		printf("Password : ");
		scanf("%s", user,1);
		if (strcmp(password, user) != 0)
		{
			printf("not matched, retry.\n");
		}
		else
		{
			printf("normal termination.");
			break;
		}
	}

	return 0;
}