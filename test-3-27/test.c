#include<stdio.h>

//数据的存储

char* my_strcpy(char* dest, const char* stc)
{
	char* ret = dest;
	assert(dest != NULL);//保证指针的有效性  NULL-空指针
	assert(stc != NULL);
		//把stc指向的字符串拷贝到dest指向的空间，包含‘\0'字符
	while (*dest++ = *stc++)
	{
		;
	
	}
	
	return ret;
}

int main()
{
	//strcpy
	//字符串拷贝
	char arr1[] = "################";
	char arr2[] = "biter";

	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}


//int main()
//{
//	//写一段代码判断当前的字节序是什么
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}