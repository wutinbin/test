#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"//引用自己的头文件,game.h内已经包含stdio.h

//测试五指棋游戏

void menu()
{
	printf("***********************\n");
	printf("*****1.play 0.exit*****\n");
	printf("***********************\n");
}

//游戏的整个算法实现
void game()
{
	//创建数组 存放走出的棋盘信息
	char board[ROW][COL] = { 0 };//ROW和COL 表示列和行.0-全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	}
}


void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("三子棋\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}