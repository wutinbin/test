#define ROW 3
#define COL 3
#include <stdio.h>

//函数声明

void InitBoard(char board[ROW][COL], int row, int col);//board是char类型的数组
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);