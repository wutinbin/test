#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//内存函数

//dest是目的地 src是源头（src指向dest）

void* my_memcpy(void* dest, const void* src, size_t count)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while (count--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[10] = { 0 };
	arr1的数字拷贝到arr2
	my_memcpy(arr2, arr1, sizeof(arr1));

	

	return 0;
}

//memove可以胜任内存的重叠拷贝

//void* my_memove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//从前向后拷
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//从后向前拷
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	my_memove(arr3, arr3 + 2, 20);//34567放到12345上（从前向后的情况）
//
//	return 0;
//}

//memcmp比较内存大小

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//	int ret = memcmp(arr1, arr2, 8);//8代表字节，比较前2个整形的内存大小
//	printf("%d\n", ret);//结果0代表前8个字节一模一样
//	return 0;
//}