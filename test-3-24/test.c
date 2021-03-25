#include<stdio.h>

typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];//电话
	char sex[5];

}Stu;

void print1(Stu tmp)//tmp是用来接收的，什么名字都可以
{
	printf("name: %s\n", tmp.name);
	printf("age: %d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex: %s\n", tmp.sex);
}

int main()
{
	Stu s = { "阿凡", 20, "15531081029", "男" };//初始化
	print1(s);
	return 0;
}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//结构体
//描述一个学生
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];//电话
//	char sex[5];
//
//}Stu;
//
//int main()
//{
//	struct Stu s1 = { "阿凡", 20, "15531081029", "男" };//初始化
//	struct Stu s2;
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}