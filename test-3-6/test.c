#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//��д��������������ʱ����,���ַ�������

//�ݹ�ķ���,û�д�����ʱ����

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

//int my_strlen(char* str) //str��һ��ָ�����������ŵ���b�ĵ�ַ
//{
//	int count = 0;//��������ʱ����
//	while (*str != '\0')//���*str������ַ�������\0,��ѭ��
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


int main()
{
	char arr[] = "bit";//��һ���ַ����������һ��bit
	//int len = strlen(arr);//���ַ�������
	//printf("%d\n", len);
	//�Լ�����һ������

	int len = my_strlen(arr);//arr�����飬���鴫�δ���ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	printf("len=%d\n", len);
	return 0;
}


//void print(int n)
//{
//	if (n > 9)//�ݹ����������
//	{
//		print(n / 10);//����n��1234�Ļ� ��10����123����������printf��ӡ4
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//��num¼����
//	print(num);//print��numÿһλ����ӡ����Ļ��
//	return 0;
//}


//�����ݹ����
//int main()
//{
//	printf("hello\n");
//	main();
//	return 0;
//}