#include"func.h"

int Search(GRADE *grades, int cur)
{
	GRADE *p = NULL;
	int i;
	char tname[20];
	printf("학생의 이름 : ");
	scanf("%s", &tname);
	printf("Debug : %s", grades[0].name);
	for (i = 0; i < cur; i++)
	{
		if (strcmp(grades[i].name, tname) == 0)
		{
			p = &grades[i];
			break;
			return 1;
		}
	}
	printf("Debug");
	if (p = NULL)
	{
		return 0;
	}
}