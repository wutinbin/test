#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>//system
#include<string.h>//strcmp


//��һ�������洢���ڴ��еĶ�������1�ĸ���

//int main()
//{
//	int num = 1;
//	int count = 0;
//	scanf("%d", &num);
//	//ͳ��num�Ĳ������м���1
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;//�����ǲ���1��Ҫȥ��һλ
//	}
//	printf("%d\n", count);
//	return 0;
//}

//����һ���ṹ������-struct Stu

struct Stu
{
	//��Ա����
	char name[20];
	int age;
	char id[20];
};

int main()
{
	int a = 10;
	struct Stu s1 = { "����", 20, "201314" };
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);//�ṹ����� . ������-���ʳ�Ա��Ϣ
	return 0;
}

//int main()
//{
//	int arr[10] = { 0 };//10��Ԫ�أ�ÿ��Ԫ����һ�����Σ�һ��������4���ֽ�
//	char ch[10] = { 0 };//ch��ÿ��Ԫ����1���ֽ�
//	printf("%d\n", sizeof(arr));//sizeof���������������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(ch));
//	return 0;
//}

//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	// ~�ǰ�λȡ��
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	int b = a >> 1;//aÿ����һλ�г�2��Ч��
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	double a = 5 / 2.0;//��ӡС��
//	printf("a=%lf\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 5 / 2;//��2��1�������̣�%������
//	printf("a=%d\n", a);
//	return 0;
//}