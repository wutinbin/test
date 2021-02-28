#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//自定义函数例子
//定义函数
int get_max(int x, int y)//int x表示接收整型a
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);//获取a和b之间的最大值，然后返回到max变量里面
	printf("max=%d\n", max);
	return 0;
}


//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//把前面五个改成*
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "*********";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//int Add(int x, int y)//int表示这个函数最后返回一个整型 因为z是整型
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}