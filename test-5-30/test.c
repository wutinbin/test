#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//动态内存分配
//malloc
//free
//calloc
//realloc

int main()
{
	//向内存申请10个内存的空间

	int* p = (int*)malloc(10 * sizeof(int)); //(int*)是强制类型装换
	if (p == NULL)
	{
		//打印错误原因的一个方式
		printf("%s\n", strerror(errno));
	}
	else
	{
		//正常使用空间
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d", *(p + i));
		}
	}
	//当动态申请的空间不再使用的时候
	//还给操作系统
	free(p);
	return 0;
}