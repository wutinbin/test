#include<stdio.h>

//����һ���ṹ������

struct Stu
{
	//�ṹ���Ա����
	char name[20];
	char tele[12];
	char sex[10];
	int age;
};

struct Stu s3;//ȫ�ֱ���

int main()
{
	//s1��s2�ǽṹ�����
	struct Stu s1;
	struct Stu s2;
	return;
}

//�ṹ���ʼ��

//struct S
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 'c', 100, 3.14, "hello bit" };//�ṹ���ʼ��Ҫ�Ӵ���
//	printf("%c %d  %lf %s\n", s.c, s.a, s.d, s.arr);
//	return 0;
//}

//�ṹ���ڴ����

//struct S1
//{
//	char c1;//char����ռһ���ֽ�
//	int a;//ռ4���ֽ�
//	char c2;//1���ֽ�
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//}