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

//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];//存放一个信息
	int size;//记录当前已经有的元素个数
};

//声明函数
void InitContact(struct Contact* ps)