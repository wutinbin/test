#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000
#include <stdio.h>
#include<string.h>
struct PeoInfo
{
	char name[20];
	int age;
	char sex[5];
	char tele[12];
	char addr[30];
};

//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};

//��������
void InitContact(struct Contact* ps)