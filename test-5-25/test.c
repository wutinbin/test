#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include "contact.h"

//实现1000个好友的信息

void menu()
{
	printf("**********************************\n");
	printf("******1.add       2.del     ******\n");//增加和删除
	printf("******3.serch     4.modify  ******\n");//查和改
	printf("******5.show      6.sort    ******\n");
	printf("******0.exit                ******\n");
	printf("**********************************\n");
}

int main()
{
	int input = 0;
	//创建通讯录(结构体）
	int size = 0;
	struct Contact con;//con就是通讯录，包含1000个元素和size
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(con, &size);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while ();
	return 0;
}