#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("����: %d\n", num);
	int answer = 0;
	int chance = rand() % 7 + 3;
	while (chance > 0)
	{
		printf("������ȸ %d ��\n", chance--);
		printf("���ڸ� ���������� (1~100): ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN \n\n");
		}
		else if (answer < num)
		{
			printf("UP \n\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ� !\n\n");
			break;
		}
		else
		{
			printf("�� �� ���� ������ �߻��߽��ϴ�\n\n");
		}
		if (chance == 0)
		{
			printf("��� ��ȸ�� �� ����ϼ̽��ϴ�. �ƽ��� �����߽��ϴ�.\n");
			num = rand() % 100 + 1;
			printf("����: %d\n", num);
			chance = rand() % 7 + 3;
			continue;
		}
	}
	return 0;
}