#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//�ڴ溯��

//dest��Ŀ�ĵ� src��Դͷ��srcָ��dest��

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
	arr1�����ֿ�����arr2
	my_memcpy(arr2, arr1, sizeof(arr1));

	

	return 0;
}

//memove����ʤ���ڴ���ص�����

//void* my_memove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//��ǰ���
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ��
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
//	my_memove(arr3, arr3 + 2, 20);//34567�ŵ�12345�ϣ���ǰ���������
//
//	return 0;
//}

//memcmp�Ƚ��ڴ��С

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//	int ret = memcmp(arr1, arr2, 8);//8�����ֽڣ��Ƚ�ǰ2�����ε��ڴ��С
//	printf("%d\n", ret);//���0����ǰ8���ֽ�һģһ��
//	return 0;
//}