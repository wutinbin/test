#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//编写函数不允许创建临时变量,求字符串长度

//递归的方法,没有创建临时变量

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

//int my_strlen(char* str) //str是一个指针变量，里面放的是b的地址
//{
//	int count = 0;//创建了临时变量
//	while (*str != '\0')//如果*str里面的字符不等于\0,就循环
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


int main()
{
	char arr[] = "bit";//创一个字符数组里面放一个bit
	//int len = strlen(arr);//求字符串长度
	//printf("%d\n", len);
	//自己创建一个函数

	int len = my_strlen(arr);//arr是数组，数组传参传过去的不是整个数组，而是第一个元素的地址
	printf("len=%d\n", len);
	return 0;
}


//void print(int n)
//{
//	if (n > 9)//递归的限制条件
//	{
//		print(n / 10);//假设n是1234的话 除10就是123，下面再用printf打印4
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//把num录进来
//	print(num);//print把num每一位数打印在屏幕上
//	return 0;
//}


//函数递归举例
//int main()
//{
//	printf("hello\n");
//	main();
//	return 0;
//}