#include<stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int main()
{
	//ָ������
	//int* arr[10];
	//����ָ��pa
	//int* (*pa)[10] = &arr;

	//����ָ��pAdd
	int(*pAdd)(int, int) = Add;
	int sum = (*pAdd)(1, 2);
	printf("%d\n", sum);

	//����ָ������pArr[5]
	int(*pArr[5])(int, int);

	//ָ����ָ�������ָ��ppArr
	int(*��*ppArr��[5])(int, int) = &pArr;
	return 0;
}


//ð��������(ֻ�������Σ���������������)
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
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
//	bubble_sort(arr, sz);//ֻ�������Σ���������������
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//qsort����������������

//int cmp_int(const void* e1, const void*e2)
//{
//	//�Ƚ���������ֵ��
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
////����test1
//int main()
//{
//	test1();
//	return 0;
//}