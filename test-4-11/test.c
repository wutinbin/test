#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<assert.h>

void reverse(char* str)
{
	assert(str);
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;

	while (left<right)
	{
		char* tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
		
	}
}

int main()
{
	char arr[256] = { 0 };
	//scanf("%s", arr);
	gets(arr);//读取一行
	//逆序函数
	reverse(arr);

	printf("逆序后的字符串：%s\n", arr);
	return 0;
}

//喝汽水，1瓶汽水1元，2个空瓶可以换1瓶汽水，给20可以换多少瓶

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//买回来的汽水喝掉
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while (empty >= 2)
//	{
//		total += empty /= 2;//总数加上空瓶换来的
//		empty = empty / 2 + empty % 2;//empty%2是换后余下来的空瓶
//	}
//	printf("total=%d\n", total);
//	return 0;
//}
//

//计算求和

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);//录入两个值
//	//算由a组成的前n项之和
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

