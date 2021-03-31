#include<stdio.h>

//函数指针数组举例

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int* arr[5];
	int(*pa)(int, int) = Add;
	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };//parr是函数指针数组
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", parr[i](2, 5));
	}
	return 0;
}


//函数指针 - 指向函数的指针

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//printf("%d\n", Add(a, b));
//	int(*pa)(int, int) = Add;//函数指针
//	printf("%d\n", (*pa)(2, 3));//2和3是传参
//	return 0;
//}

//函数指针举例

//void Print(char*str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{ 
//	void(*p)(char*) = Print;//(char*)表示指针指向函数
//	(*p)("fanfan");
//	return 0;
//}

//void Print(char*str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	int a;
//	int * pa;
//	void(*p)(char*) = Print;
//
//	(*p)("hello");
//	return 0;
//}

//void test(int arr[3][2])
//{
//
//}
//int main()
//{
//	int arr[3][2] = { 0 };
//	test(arr);//二维数组传参
//	return 0;
//}