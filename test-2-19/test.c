#include<stdio.h>
#include<string.h>//调用strlen的头文件
#include<windows.h>//调用sleep的头文件
#include<stdlib.h>//调用system函数的头文件
//编写代码,演示字符两端从中间移动
int main()
{
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = strlen(arr1) - 1;//下标总是比元素个数少,所以得减1

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//休息一秒
		Sleep(1000);//1000表示毫秒
		system("cls");//清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}

//用do while循环打印1到10
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}