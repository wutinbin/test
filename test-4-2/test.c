#include<stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int main()
{
	//指针数组
	//int* arr[10];
	//数组指针pa
	//int* (*pa)[10] = &arr;

	//函数指针pAdd
	int(*pAdd)(int, int) = Add;
	int sum = (*pAdd)(1, 2);
	printf("%d\n", sum);

	//函数指针数组pArr[5]
	int(*pArr[5])(int, int);

	//指向函数指针数组的指针ppArr
	int(*（*ppArr）[5])(int, int) = &pArr;
	return 0;
}


//冒泡排序函数(只能排整形，不能排其他类型)
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j <sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);//只能排整形，不能排其他类型
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//qsort可以排序任意类型

//int cmp_int(const void* e1, const void*e2)
//{
//	//比较两个整形值的
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//
////调用test1
//int main()
//{
//	test1();
//	return 0;
//}