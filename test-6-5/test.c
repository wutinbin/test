#include<stdio.h>
#include<errno.h>

//realloc - ������̬�����ڴ�ռ�Ĵ�С

int main()
{
	int *p = malloc(20);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	//ֻ����ʹ��malloc���ٵ�20���ֽڿռ�
	//����20���ֽڲ����ˣ�����ʹ��realloc����������

	int* p2 = relloc(p, 40);//����Ϊ40���ֽ�
	int i = 0;

	for (i = 5; i < 10; i++)
	{
		printf("%d ", *(p2 + i));
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p2 + i));
	}

	//�ͷ��ڴ�
	free(p);
	p = NULL;

	return 0;
}