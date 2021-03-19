#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//实现一个函数，打印一个乘法口诀表

void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)//控制口诀表的行
	{
		//控制一行打印几项
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d ", i, j, i*j);
		}
		printf("\n");//换行
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}

//递归实现n的k次方
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


//打印二进制数的奇数位和偶数位
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位: \n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//
//	printf("偶数位: \n");
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
//	print(m);//print是一个函数
//	return 0;
//}



//统计二进制数中1的个数
//写一个函数返回参数中二进制1的个数

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
//	//写一个求a的二进制（补码）表示1的个数
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}