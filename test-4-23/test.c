#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strcpy���÷�

char* my_strcpy(char* dest,const char* src)//ָ��char* src����arr2�ַ��ĵ�ַ��const���α�ʾ���ᷢ���仯
{
	//��ָ֤����Ч��
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//����srcָ����ַ�����destָ��Ŀռ䣬����\0
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

	my_strcpy(arr1, arr2);//�ַ���������arr2������arr1
	printf("%s\n", arr1);

	return 0;
}


//strcmp���÷����ַ����Ƚ�

//my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
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
//	printf("ret=%d\n", ret);//����0˵��p1����p2
//	return 0;
//}


//strcat���÷���׷�ӣ�

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	//�ҵ�Ŀ�ĵ��ַ�����\0
//	while (dest != '\0')
//	{
//		dest++;
//	}
//
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[30] = "hello";//Ŀ�ĵ�Ҫ�㹻��
//	int arr2[] = "world";
//	my_strcat(arr1, arr2);//arr2׷�ӵ�arr1����
//	printf("%s\n", arr1);
//	return 0;
//}

//strncatָ�����ȵ�׷��

//int main()
//{
//	char arr1[30] = "hell0";
//	char arr2[] = "world";
//
//	strncat(arr1, arr2, 3);//ָ��׷��3������
//	printf("%s\n", arr1);
//	return 0;
//}