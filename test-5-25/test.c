#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include "contact.h"

//ʵ��1000�����ѵ���Ϣ

void menu()
{
	printf("**********************************\n");
	printf("******1.add       2.del     ******\n");//���Ӻ�ɾ��
	printf("******3.serch     4.modify  ******\n");//��͸�
	printf("******5.show      6.sort    ******\n");
	printf("******0.exit                ******\n");
	printf("**********************************\n");
}

int main()
{
	int input = 0;
	//����ͨѶ¼(�ṹ�壩
	int size = 0;
	struct Contact con;//con����ͨѶ¼������1000��Ԫ�غ�size
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��>");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while ();
	return 0;
}