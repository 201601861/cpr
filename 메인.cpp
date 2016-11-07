#include"func.h"

int main(void)
{
	GRADE *grades = NULL;

	int menu = 0;
	int count = 0;
	while (1)
	{
		menu = SelectMenu();
		if (menu == 0)
			break;
		switch (menu)
		{
		case INPUT:
			Input(grades, &count);
			break;
		case OUTPUT:
			Output(grades, count);
			break;
		case SAVE: {}
		case RENEW: {}
		
		}
	}

	free(grades);
	grades = NULL;

	return 0;
}