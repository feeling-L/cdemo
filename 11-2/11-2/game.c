#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"

//��ʼ������
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

//��ӡ����
void Displayboard(char Board[ROW][COL], int row, int col) {
	int i = 0;
	for (i=0; i < row; i++) {
		//��ӡ����
		int j = 0;
		for (j=0; j < col; j++) {
			printf(" %c ",Board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���Ϣ
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
	printf("�������\n");
	while (1) {
		printf("����������>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (Board[x - 1][y - 1] = ' ') {
				Board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("���걻ռ�ã���ѡ������λ��\n");
			}
		}
		else {
			printf("�����������������");
		}
	}
}


void Computerplay(char Board[ROW][COL], int row, int col) {
	printf("��������>\n");
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
//���˷���1
//û������0
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

//�ж���Ӯ
//���Ӯ*
//����Ӯ#
//ƽ��Q
//����C
char IsWin(char Board[ROW][COL], int row, int col) {
	//�ж���
	int i = 0;
	int j = 0;
	for (i=0; i < row; i++) {
		if (Board[i][0] == Board[i][1] && Board[i][0] == Board[i][2] && Board[i][0] != ' ') {
			return Board[i][0];
		}
	}
	//�ж���
	for (j=0; j < col; j++) {
		if (Board[0][j] == Board[1][j] && Board[0][j] == Board[2][j] && Board[0][j] != ' ') {
			return Board[0][j];
		}
	}
	//�ж����Խ���
	if (Board[0][0] == Board[1][1] && Board[0][0] == Board[2][2] && Board[0][0] != ' ') {
		return Board[0][0];
	}
	//�жϸ��Խ���
	if (Board[0][2] == Board[1][1] && Board[0][2] == Board[2][0] && Board[0][2] != ' ') {
		return Board[0][2];
	}
	

	//û��Ӯ���ж��Ƿ�ƽ��
	if (IsFull(Board,row,col)){
		return 'Q';
	}

	//��Ϸ����
	return 'C';
}