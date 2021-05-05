#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//内存函数

struct S
{
	char name[20];
	int age;
};

void* my_memcpy(void* dest，const void* src,size_t num)//void*是无类型指针
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (num--)
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
	int arr2[5] = { 0 };
	struct S arr3[] = { { "张三", 20 }, { "李四""30" } };
	struct S arr4[3] = { 0 };
	my_memcpy(arr4, arr3, sizeof(arr3));

	return 0;
}