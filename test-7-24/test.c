#include<stdio.h>
#include<errno.h>

//�ļ�����

int main()
{
	//���ļ�test.txt
	//���·��
	fopen("test.tst", "r");

	//����·��
	FILE* pf = fopen("test.tst", "r");
	if (pf == NULL)
	{
		printf("%s/n", strerror(errno));
	}
	//���ļ�
	//���ļ�

	//�ر�
	fclose(pf);
	pf = NULL;
	return 0;
}

//int get_max(int x, int y)//int x��ʾ��������a
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//��ȡa��b֮������ֵ��Ȼ�󷵻ص�max��������
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//��ǰ������ĳ�*
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "*********";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//int Add(int x, int y)//int��ʾ���������󷵻�һ������ ��Ϊz������
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}