#include<stdio.h>

//枚举（一一列举）

//枚举类型
enum Sex
{
	//枚举的可能取值
	MALE,
	FEMALE,
	SECRET
};

enum Color
{
	RED,
	YELLOW,
	BLUE

};

int main()
{
	enum Sex s = MALE;
	enum Color c = BLUE;
	return 0;
}

//联合体大小的计算

//union Un
//{
//	int a;//4 8 4
//	char arr[5];//5 1 8 1
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}

//位段式结构体

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8个字节
//	return 0;
//}