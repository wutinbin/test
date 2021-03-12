#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ÿ��Ԫ�ض���ʼ��
void InitBoard(int board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//��ӡһ������
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2] );
//		//��ӡһ�зָ���
//		if (i < row-1)
//		printf("---|---|---\n");
//	}
//}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡһ������
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col-1)
			printf("|");
		}
		printf("\n");
		//��ӡһ�зָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
		
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����: >\n");
	while (1)
	{
		printf("������Ҫ�µ�����:>");
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '* ';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
			}

		}
		else
		{
			printf("����Ƿ�,���������룡\n");

		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{

}