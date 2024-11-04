#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"

//初始化棋盘
void Initboard(char Board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i=0; i < row; i++) {
		/*for (j ; j < col; j++) {
			Board[i][j] = ' ';
		}*/
		for (j=0; j < col; j++) {
			Board[i][j] = ' ';
		}
	}
}

//打印棋盘
void Displayboard(char Board[ROW][COL], int row, int col) {
	int i = 0;
	for (i=0; i < row; i++) {
		//打印数据
		int j = 0;
		for (j=0; j < col; j++) {
			printf(" %c ",Board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割信息
		//printf("---|---|---\n");
		if (i < row - 1) {
			int j = 0;
			for (j; j < col; j++) {
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}


void Userspaly(char Board[ROW][COL], int row, int col) {
	int x, y;
	printf("玩家下棋\n");
	while (1) {
		printf("请输入坐标>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (Board[x - 1][y - 1] = ' ') {
				Board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("坐标被占用，请选择其它位置\n");
			}
		}
		else {
			printf("坐标错误，请重新输入");
		}
	}
}


void Computerplay(char Board[ROW][COL], int row, int col) {
	printf("电脑下棋>\n");
	int x, y;
	
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (Board[x][y] == ' ') {
			Board[x][y] = '#';
			break;
		}
	}
}
//满了返回1
//没满返回0
int IsFull(char Board[ROW][COL], int row, int col) {
	int i ,j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {

			if (Board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

//判断输赢
//玩家赢*
//电脑赢#
//平局Q
//继续C
char IsWin(char Board[ROW][COL], int row, int col) {
	//判断行
	int i = 0;
	int j = 0;
	for (i=0; i < row; i++) {
		if (Board[i][0] == Board[i][1] && Board[i][0] == Board[i][2] && Board[i][0] != ' ') {
			return Board[i][0];
		}
	}
	//判断列
	for (j=0; j < col; j++) {
		if (Board[0][j] == Board[1][j] && Board[0][j] == Board[2][j] && Board[0][j] != ' ') {
			return Board[0][j];
		}
	}
	//判断主对角线
	if (Board[0][0] == Board[1][1] && Board[0][0] == Board[2][2] && Board[0][0] != ' ') {
		return Board[0][0];
	}
	//判断副对角线
	if (Board[0][2] == Board[1][1] && Board[0][2] == Board[2][0] && Board[0][2] != ' ') {
		return Board[0][2];
	}
	

	//没人赢，判断是否平局
	if (IsFull(Board,row,col)){
		return 'Q';
	}

	//游戏继续
	return 'C';
}