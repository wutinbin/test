#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在
//要求：时间复杂度小于O（N）

int FindNum(int arr[3][3], int k, int row, int col)//row是行，col是列
{
	int x = 0;
	int y = col - 1;

	while (x <= row - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			printf("下标是%d %d\n", x, y);
			return 1;//找到了
		}
	}
	//找不到
	return 0;
}

int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };//二维数组初始化
	int k = 7;//k是变量，要找的数字
	int ret = FindNum(arr, k, 3, 3);
	if (ret == 1)
	{
		printf("找到了\n");
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}

//strlen以‘\0’作为结束标志
//写一个自己的strlen函数的三种方法
//计数器方法
//递归
//指针-指针

//int my_strlen(const char* str)//指针str来接收
//{
//	int count = 0;
//	assert(str != NULL);//断言：str不能等于空指针，保证指针的有效性
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");//传过去的是a的地址
//
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	char arr1[30] = "abc";
//	char arr2[] = "def";
//	strcat(arr1, arr2);//arr1的后面追加arr2
//	printf("%s\n", arr1);//abcdef
//	return 0;
//}