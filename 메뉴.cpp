#include"func.h"

int SelectMenu(void)
{
	int select;
	while (1)
	{
		int result;
		printf("무엇을 하시겠습니까?\n");
		printf("1. 성적 입력\n2. 성적 출력\n3. 저장\n4. 갱신\n0. 종료\n");
		printf("메뉴 선택 : ");
		result = scanf("%d", &select);
		CLEARINPUT();
		if (select >= 0 && select <= 4)
			return select;
		else
		{
			printf("잘못 입력하셨습니다.\n");
			continue;
		}
	}
}