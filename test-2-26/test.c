#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


//��ӡһ���˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//ȷ����ӡ9��
//	{
//		//����ѭ���Ǵ�ӡһ��
//		//i���� j����
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i*j);//%2d��ʾ��ӡ���������λ������
//		}
//		printf("\n");//��ӡһ�������
//	}
//	return 0;
//}


void menu()//��ӡһ���˵�
{
	printf("*************************\n");
	printf("***  1.play  0.exit   ***\n");
	printf("*************************\n");
}

void game()
{
	printf("������\n");
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
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