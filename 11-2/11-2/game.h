#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//��ʼ������
void Initboard(char Board[ROW][COL], int row, int col);
//��ӡ����
void Displayboard(char Board[ROW][COL], int row, int col);

//�������
void Userspaly(char Board[ROW][COL], int row, int col);

//��������
void Computerplay(char Board[ROW][COL], int row, int col);


char IsWin(char Board[ROW][COL], int row, int col);


//int Isfull(char Board[ROW][COL], int row, int col);