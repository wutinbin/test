#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"//�����Լ���ͷ�ļ�,game.h���Ѿ�����stdio.h

//������ָ����Ϸ

void menu()
{
	printf("***********************\n");
	printf("*****1.play 0.exit*****\n");
	printf("***********************\n");
}

//��Ϸ�������㷨ʵ��
void game()
{
	//�������� ����߳���������Ϣ
	char board[ROW][COL] = { 0 };//ROW��COL ��ʾ�к���.0-ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//��������
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("������\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}