#include"func.h"

int SelectMenu(void)
{
	int select;
	while (1)
	{
		int result;
		printf("������ �Ͻðڽ��ϱ�?\n");
		printf("1. ���� �Է�\n2. ���� ���\n3. ����\n4. ����\n0. ����\n");
		printf("�޴� ���� : ");
		result = scanf("%d", &select);
		CLEARINPUT();
		if (select >= 0 && select <= 4)
			return select;
		else
		{
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			continue;
		}
	}
}