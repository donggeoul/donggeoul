#include<stdio.h>

int main(void)
{
	int x[20];
	int a, n, i, m;
	int sum = 0;

	printf("자료의 개수를 입력하시오");
	scanf_s("%d", &n, 1);

	if (n >= 0 && n <= 20)
	{
		for (i = 0; i < n; i++);
		{
			printf("%d의 값을 입력 : ", i);
			scanf_s("%d", &a, 1);
			x[i] = a;
			sum = sum + x[i];
		}
		m = sum / n;
		printf("평균은 %d 입니다.", m);
	}
	printf("시스템을 종료합니다");
	system("pause");

	return 0;

}