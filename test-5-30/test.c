#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//��̬�ڴ����
//malloc
//free
//calloc
//realloc

int main()
{
	//���ڴ�����10���ڴ�Ŀռ�

	int* p = (int*)malloc(10 * sizeof(int)); //(int*)��ǿ������װ��
	if (p == NULL)
	{
		//��ӡ����ԭ���һ����ʽ
		printf("%s\n", strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
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
	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
	//��������ϵͳ
	free(p);
	return 0;
}