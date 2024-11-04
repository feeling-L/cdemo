#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//初始化棋盘
void Initboard(char Board[ROW][COL], int row, int col);
//打印棋盘
void Displayboard(char Board[ROW][COL], int row, int col);

//玩家下棋
void Userspaly(char Board[ROW][COL], int row, int col);

//电脑下棋
void Computerplay(char Board[ROW][COL], int row, int col);


char IsWin(char Board[ROW][COL], int row, int col);


//int Isfull(char Board[ROW][COL], int row, int col);