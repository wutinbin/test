#include<stdio.h>
#include<errno.h>

//realloc - 调整动态开辟内存空间的大小

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
	//只是在使用malloc开辟的20个字节空间
	//假设20个字节不够了，可以使用realloc函数来调整

	int* p2 = relloc(p, 40);//调整为40个字节
	int i = 0;

	for (i = 5; i < 10; i++)
	{
		printf("%d ", *(p2 + i));
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p2 + i));
	}

	//释放内存
	free(p);
	p = NULL;

	return 0;
}