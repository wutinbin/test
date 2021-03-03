#include<stdio.h>

//写一个函数，每调用一次这个函数，就会将num的值增加1

//void Add(int* p)//p是指针变量
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);//&的作用在于把num传给Add操作
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}


//写一个函数打印100到200之间的素数
//int is_prime(int n)
//{
//	//判断n是否为素数
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	if (j == n)
//		return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)//is_prime是打印素数的函数
//			printf("%d ", i);
//	}
//	return 0;
//}


//写一个函数判断一年是否为闰年

//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//函数的声明
int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int a = 20;
	int b = 30;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);

	return 0;
}
