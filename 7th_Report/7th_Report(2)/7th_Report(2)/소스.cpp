#include<stdio.h>

int main(void)
{
	int x[20];
	int a, n, i, m;
	int sum = 0;

	printf("�ڷ��� ������ �Է��Ͻÿ�");
	scanf_s("%d", &n, 1);

	if (n >= 0 && n <= 20)
	{
		for (i = 0; i < n; i++);
		{
			printf("%d�� ���� �Է� : ", i);
			scanf_s("%d", &a, 1);
			x[i] = a;
			sum = sum + x[i];
		}
		m = sum / n;
		printf("����� %d �Դϴ�.", m);
	}
	printf("�ý����� �����մϴ�");
	system("pause");

	return 0;

}