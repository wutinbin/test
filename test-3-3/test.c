#include<stdio.h>

//дһ��������ÿ����һ������������ͻὫnum��ֵ����1

//void Add(int* p)//p��ָ�����
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);//&���������ڰ�num����Add����
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}


//дһ��������ӡ100��200֮�������
//int is_prime(int n)
//{
//	//�ж�n�Ƿ�Ϊ����
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	if (j == n)
//		return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)//is_prime�Ǵ�ӡ�����ĺ���
//			printf("%d ", i);
//	}
//	return 0;
//}


//дһ�������ж�һ���Ƿ�Ϊ����

//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//����������
int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int a = 20;
	int b = 30;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);

	return 0;
}
