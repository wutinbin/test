#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


//打印一个乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//确定打印9行
//	{
//		//以下循环是打印一行
//		//i是行 j是列
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i*j);//%2d表示打印这个数组两位，对齐
//		}
//		printf("\n");//打印一行完后换行
//	}
//	return 0;
//}


void menu()//打印一个菜单
{
	printf("*************************\n");
	printf("***  1.play  0.exit   ***\n");
	printf("*************************\n");
}

void game()
{
	printf("猜数字\n");
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}