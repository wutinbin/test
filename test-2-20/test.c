#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>//引用strcmp函数的头文件

//模拟用户输入密码三次机会登录的场景
int main()
{
	int i = 0;
	char password[20] = { 0 };//密码存起来的意思
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);//密码录进来
		if (strcmp(password, "921540") == 0)//==不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("三次密码均错误,退出程序\n");
	return 0;
}
