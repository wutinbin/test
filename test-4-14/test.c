#include<stdio.h>

//猜名次
//5名运动员参加了10米台跳水运动，有人让他们预测比赛结果
//A说：B第二，我第三
//B说：我第二，E第四
//C说：我第一，D第二
//D说：C最后，我第三
//E说：我第四，A第一
//每队选手都说对了一半，请编程确定比赛的名次

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b==2) + (a==3) == 1) && 
							((b==2) + (e==4) == 1) && 
							((c==1) + (d==2) == 1) &&
							((c==5) + (d==3) == 1) &&
							((e==4) + (a==1) == 1))//两个表达式结果加起来等于1，说明每人只说对了一半
						{
							if (a*b*c*d*e==120)//加上这个条件表明abcde是12345
								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
	return 0;
}


//旋转字符串
//比如：ABCD左旋一个字符串得到BCDA 左旋两个得到CDAB

//逆序字符串函数

//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	arrert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);//一个数组和旋转个数k
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		//3人说了真话，1人说了假话 
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}


//赛马问题
//有36匹马，6个跑道，没有计时器，请赛马确定前3名
//问最少赛几次