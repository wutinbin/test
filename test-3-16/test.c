#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>//system
#include<string.h>//strcmp


//求一个整数存储在内存中的二进制中1的个数

//int main()
//{
//	int num = 1;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num的补码中有几个1
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;//不管是不是1都要去掉一位
//	}
//	printf("%d\n", count);
//	return 0;
//}

//创建一个结构体类型-struct Stu

struct Stu
{
	//成员变量
	char name[20];
	int age;
	char id[20];
};

int main()
{
	int a = 10;
	struct Stu s1 = { "张三", 20, "201314" };
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);//结构体变量 . 操作符-访问成员信息
	return 0;
}

//int main()
//{
//	int arr[10] = { 0 };//10个元素，每个元素是一个整形，一个整形是4个字节
//	char ch[10] = { 0 };//ch的每个元素是1个字节
//	printf("%d\n", sizeof(arr));//sizeof计算的是整个数组的大小，单位是字节
//	printf("%d\n", sizeof(ch));
//	return 0;
//}

//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	// ~是按位取反
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	int b = a >> 1;//a每右移一位有除2的效果
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	double a = 5 / 2.0;//打印小数
//	printf("a=%lf\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 5 / 2;//商2余1，除得商，%得余数
//	printf("a=%d\n", a);
//	return 0;
//}