#include"func.h"

int Input(GRADE *grades,int *current)
{
	grades = (GRADE*)realloc(grades, sizeof(GRADE)*(*current + 1));
	GRADE *p = NULL;
	p = &grades[*current];
	printf("�̸� : ");
	scanf("%s", &p->name);
	printf("��ȭ��ȣ : ");
	scanf("%s", &p->pn);
	printf("C��� ���� : ");
	scanf("%d", &p->cpr);
	printf("�������� ���� : ");
	scanf("%d", &p->sec);
	printf("��Ʈ��ũ ���� : ");
	scanf("%d", &p->net);
	(*current)++;
	return 0;
}