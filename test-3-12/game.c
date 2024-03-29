#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//把每个元素都初始化
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
//		//打印一行数据
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2] );
//		//打印一行分割行
//		if (i < row-1)
//		printf("---|---|---\n");
//	}
//}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印一行数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col-1)
			printf("|");
		}
		printf("\n");
		//打印一行分割行
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
	printf("玩家走: >\n");
	while (1)
	{
		printf("请输入要下的坐标:>");
		scanf("%d%d", &x, &y);
		//判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '* ';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}

		}
		else
		{
			printf("坐标非法,请重新输入！\n");

		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{

}