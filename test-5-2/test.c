#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strstr - �����ַ���

char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char *s1 = p1;
	char *s2 = p2;
	char *cur = p1;
	if (*p2 == '\0')//��p2Ϊ���ַ���ʱ
	{
		return p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = p2;

		while ((*s1 = '\0') && (*s2 = '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;//�ҵ��ַ���
		}
		cur++;
	}
	return NULL;//�Ҳ����ַ���
}

int main()
{
	char *p1 = "abcdef";
	char *p2 = "abc";
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("�ַ���������\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}

//strerror - ���ش�����

#include<errno.h>

//int main()
//{
//	errno��һ��ȫ�ֵĴ�����ı���
//	
//	char* str = strerror(errno);
//	printf("%s\n", str);
//	return 0;
//}

#include<ctype.h>

//�ַ�ת������

//int main()
//{
//	//��дתСд
//	char ch = tolower('Q');
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}