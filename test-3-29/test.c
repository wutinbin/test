#include<stdio.h>

//�ַ�ָ��
int main()
{
	char ch = 'w';
	char* pc = &ch;//pc�����ַ�ָ��
	return 0;
}

int main()
{
	char* p = "abcdef";//abcdef�ǳ����ַ���
	printf("%c\n", *p);
	printf("%s\n", p);//%s�Ǵ�ӡ�ַ���
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

//ָ������

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
//		int j = 0;//��Ԫ�ص�ַ�ټ�һ������
//		for (j = 0; j < 5; j++)
//		{
//			printf("&d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ָ��

//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int(*p)[5] = &arr;//p��������ָ��
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}

