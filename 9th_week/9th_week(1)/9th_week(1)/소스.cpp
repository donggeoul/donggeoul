#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)
#define MAXSTRLENGTH  80

int main(void)
{
	char str[80] = { 0 };
	char res_str[80];
	const char *star = "**********";
	int len;
	printf("�ܾ� �Է� : ");
	scanf("%s", str);
	len = strlen(str);
	if (len <= 5)
	{
		strcpy(res_str, str);
	}
	else
	{
		strncpy(res_str, str, 5);
		res_str[5] = '\0';
		strncat(res_str, star, len - 5);
	}
	printf("�Է��� �ܾ� : %s, ������ �ܾ� : %s\n", str, res_str);
	return 0;
}