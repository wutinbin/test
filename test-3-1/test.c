#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//�Զ��庯������
//���庯��
int get_max(int x, int y)//int x��ʾ��������a
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
	int max = get_max(a, b);//��ȡa��b֮������ֵ��Ȼ�󷵻ص�max��������
	printf("max=%d\n", max);
	return 0;
}


//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//��ǰ������ĳ�*
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


//int Add(int x, int y)//int��ʾ���������󷵻�һ������ ��Ϊz������
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