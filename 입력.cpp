#include"func.h"

int Input(GRADE *grades,int *current)
{
	grades = (GRADE*)realloc(grades, sizeof(GRADE)*(*current + 1));
	GRADE *p = NULL;
	p = &grades[*current];
	printf("이름 : ");
	scanf("%s", &p->name);
	printf("전화번호 : ");
	scanf("%s", &p->pn);
	printf("C언어 점수 : ");
	scanf("%d", &p->cpr);
	printf("정보보안 점수 : ");
	scanf("%d", &p->sec);
	printf("네트워크 점수 : ");
	scanf("%d", &p->net);
	(*current)++;
	return 0;
}