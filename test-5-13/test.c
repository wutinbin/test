#include<stdio.h>

//声明一个结构体类型

struct Stu
{
	//结构体成员变量
	char name[20];
	char tele[12];
	char sex[10];
	int age;
};

struct Stu s3;//全局变量

int main()
{
	//s1和s2是结构体变量
	struct Stu s1;
	struct Stu s2;
	return;
}

//结构体初始化

//struct S
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 'c', 100, 3.14, "hello bit" };//结构体初始化要加大挎号
//	printf("%c %d  %lf %s\n", s.c, s.a, s.d, s.arr);
//	return 0;
//}

//结构体内存对齐

//struct S1
//{
//	char c1;//char类型占一个字节
//	int a;//占4个字节
//	char c2;//1个字节
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//}