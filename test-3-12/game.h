#define ROW 3
#define COL 3
#include <stdio.h>

//��������

void InitBoard(char board[ROW][COL], int row, int col);//board��char���͵�����
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);