#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"

void menu() {
	printf("**************************************\n");
	printf("*******   1.play   0.exit   **********\n");
	printf("**************************************\n");
}

void game() {
	char ret;
	char Board[ROW][COL] = { 0 };
	//初始化棋盘
	Initboard(Board,ROW,COL);
	//打印棋盘
	Displayboard(Board,ROW,COL);
	while (1) {
		//玩家下棋
		Userspaly(Board, ROW, COL);
		//判断输赢
		ret = IsWin(Board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		Displayboard(Board, ROW, COL);

		//电脑下棋
		Computerplay(Board, ROW, COL);
		//判断输赢
		ret = IsWin(Board, ROW, COL);
		if (ret != 'C')
			break;
		Displayboard(Board, ROW, COL);
	}
	if (ret == '*')
		printf("玩家获胜\n");
	else if (ret == '#')
		printf("电脑获胜\n");
	else
		printf("平局\n");
	Displayboard(Board, ROW, COL);
}

int main() {
	srand((unsigned int)time(NULL));
	int input;
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input) {
			case 1:
				printf("三子棋\n");
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;
		}		
	} while (input);
	return 0;
}