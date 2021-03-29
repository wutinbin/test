#include<stdio.h>

//字符指针
int main()
{
	char ch = 'w';
	char* pc = &ch;//pc就是字符指针
	return 0;
}

int main()
{
	char* p = "abcdef";//abcdef是常量字符串
	printf("%c\n", *p);
	printf("%s\n", p);//%s是打印字符串
	return 0;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	char* p1 = "abcdef";
	char *p2 = "abcdef";
	if (arr1 == arr2)
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;
}

//指针数组

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;//首元素地址再加一个数字
//		for (j = 0; j < 5; j++)
//		{
//			printf("&d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//数组指针

//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int(*p)[5] = &arr;//p就是数组指针
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}

