#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
	char title[30];
	char author[20];
	int page;
	int price;
};

int main(void)
{
	struct book s1;

	strcpy_s(s1.title, "±×¸´");
	strcpy_s(s1.author, "¾ØÀý¶ó ´õÅ©¿ö½º");
	s1.page = 416;
	s1.price = 10800;
	printf("title : %s\n", s1.title);
	printf("author : %s\n", s1.author);
	printf("page : %d\n", s1.page);
	printf("price : %d\n", s1.price);

	return 0;
}