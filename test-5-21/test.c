#include<stdio.h>

//ö�٣�һһ�о٣�

//ö������
enum Sex
{
	//ö�ٵĿ���ȡֵ
	MALE,
	FEMALE,
	SECRET
};

enum Color
{
	RED,
	YELLOW,
	BLUE

};

int main()
{
	enum Sex s = MALE;
	enum Color c = BLUE;
	return 0;
}

//�������С�ļ���

//union Un
//{
//	int a;//4 8 4
//	char arr[5];//5 1 8 1
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}

//λ��ʽ�ṹ��

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽ�
//	return 0;
//}