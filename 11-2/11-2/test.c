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
	//��ʼ������
	Initboard(Board,ROW,COL);
	//��ӡ����
	Displayboard(Board,ROW,COL);
	while (1) {
		//�������
		Userspaly(Board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(Board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		Displayboard(Board, ROW, COL);

		//��������
		Computerplay(Board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(Board, ROW, COL);
		if (ret != 'C')
			break;
		Displayboard(Board, ROW, COL);
	}
	if (ret == '*')
		printf("��һ�ʤ\n");
	else if (ret == '#')
		printf("���Ի�ʤ\n");
	else
		printf("ƽ��\n");
	Displayboard(Board, ROW, COL);
}

int main() {
	srand((unsigned int)time(NULL));
	int input;
	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input) {
			case 1:
				printf("������\n");
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}		
	} while (input);
	return 0;
}