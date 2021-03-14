#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>//system
#include<string.h>//strcmp

//写一个关机程序：程序运行，电脑将在1分钟后关机，如果输入我是猪就取消关机
int main()
{
	char input[20] = { 0 };//数组 存储数据
	//关机
	//库函数system() - 专门用来执行系统命令的
	system("shutdown -s -t 60");//关机

again:
	printf("请注意,你的电脑将在一分钟内关机,如果输入：我是猪,就取消关机\n");
	scanf("%s", input);//%s - 字符串（我是猪是字符串）
	if (strcmp(input, "我是猪") == 0)//判断input中放的是不是“我是猪”;strcmp - 字符串比较
	{
		system("shutdown -a");//取消关机
	}
	else
	{
		goto again;
	}
	return 0;
}


//交换两个int变量的值，不能使用第三个变量，即a=3，b=5，交换之后a=5，b=3
//不会溢出 没有第三变量

//int main()
//{
//	//交换两个整型变量
//	int a = 3;
//	int b = 5;
//
//	printf("交换前: a=%d b=%d\n", a, b);
//	// ^:按（二进制）位异或，相同位0，相异为1
//	//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("交换后: a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	//交换两个整型变量
//	int a = 3;
//	int b = 5;
//
//	printf("交换前: a=%d b=%d\n", a, b);
//	//整型溢出的问题
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后: a=%d b=%d\n", a, b);
//
//	return 0;
//}

//创建第三个变量的做法
//int main()
//{
//	//交换两个整型变量
//	int a = 3;
//	int b = 5;
//	int c = 0;//空瓶
//
//	printf("交换前: a=%d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("交换后: a=%d b=%d\n", a, b);
//
//	return 0;
//}