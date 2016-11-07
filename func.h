#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define CLEARINPUT() while(getchar()!='\n');
#define INPUT 1
#define OUTPUT 2
#define SAVE 3
#define RENEW 4

typedef struct grade {
	char name[20];
	char pn[20];
	int cpr, sec, net;
}GRADE;

int SelectMenu(void);
int Input(GRADE *grades, int *current);
void Output(GRADE *grades, int current);
int Search(GRADE *grades, int cur);