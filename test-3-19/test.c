#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//ʵ��һ����������ӡһ���˷��ھ���

void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)//���ƿھ������
	{
		//����һ�д�ӡ����
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d ", i, j, i*j);
		}
		printf("\n");//����
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}

//�ݹ�ʵ��n��k�η�
//double Pow(int n, int k)
//{
//	if (k < 0)
//		return (1.0 / (Pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n*Pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("ret=%lf\n", ret);
//	return 0;
//}


//��ӡ��������������λ��ż��λ
//void print(int m)
//{
//	int i = 0;
//	printf("����λ: \n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//
//	printf("ż��λ: \n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);//print��һ������
//	return 0;
//}



//ͳ�ƶ���������1�ĸ���
//дһ���������ز����ж�����1�ĸ���

//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//дһ����a�Ķ����ƣ����룩��ʾ1�ĸ���
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}