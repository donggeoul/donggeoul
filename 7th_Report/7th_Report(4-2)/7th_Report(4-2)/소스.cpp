#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int temp;
	int num[5] = { 0 };

	printf("Enter five values : ");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &num[i]);
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	printf("Write down the alignment results : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d", num[i]);
	}

	return 0;
}


