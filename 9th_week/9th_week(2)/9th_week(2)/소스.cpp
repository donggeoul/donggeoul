#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)
#define MAXSTRLENGTH  80

int main(void)
{
	char str[80];
	strcpy(str, "wine");
	strcat(str, "apple");
	strncpy(str, "pear", 1);
	printf("%s, %d\n", str, strlen(str));
	return 0;
}