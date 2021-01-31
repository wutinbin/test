#include <stdio.h>
//#include <string.h>
//写一个函数求两个数的较大值
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}

//23
//sizeof的使用方法
//int main()
//{
//	int a = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6 };//创建一个数组 6*4=24
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(arr));//计算数组大小，单位是字节
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用a赋给b，后++ 1
//	//int b = ++a;//前置++，先a++ 1，后使用a赋给b
//	int b = a--;//后置--，先使用，后--
//	printf("a=%d b=%d\n", a, b);
//	
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()：函数调用操作符
//	
//	return 0;
//}