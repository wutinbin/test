#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strcpy的用法

char* my_strcpy(char* dest,const char* src)//指针char* src接收arr2字符的地址，const修饰表示不会发生变化
{
	//保证指针有效性
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//拷贝src指向的字符串到dest指向的空间，包含\0
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bit";

	my_strcpy(arr1, arr2);//字符串拷贝，arr2拷贝到arr1
	printf("%s\n", arr1);

	return 0;
}


//strcmp的用法，字符串比较

//my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = my_strcmp(p1, p2);
//
//	printf("ret=%d\n", ret);//大于0说明p1大于p2
//	return 0;
//}


//strcat的用法（追加）

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	//找到目的地字符串的\0
//	while (dest != '\0')
//	{
//		dest++;
//	}
//
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[30] = "hello";//目的地要足够大
//	int arr2[] = "world";
//	my_strcat(arr1, arr2);//arr2追加到arr1后面
//	printf("%s\n", arr1);
//	return 0;
//}

//strncat指定长度的追加

//int main()
//{
//	char arr1[30] = "hell0";
//	char arr2[] = "world";
//
//	strncat(arr1, arr2, 3);//指定追加3个长度
//	printf("%s\n", arr1);
//	return 0;
//}