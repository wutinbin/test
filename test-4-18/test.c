#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O��N��

int FindNum(int arr[3][3], int k, int row, int col)//row���У�col����
{
	int x = 0;
	int y = col - 1;

	while (x <= row - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			printf("�±���%d %d\n", x, y);
			return 1;//�ҵ���
		}
	}
	//�Ҳ���
	return 0;
}

int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };//��ά�����ʼ��
	int k = 7;//k�Ǳ�����Ҫ�ҵ�����
	int ret = FindNum(arr, k, 3, 3);
	if (ret == 1)
	{
		printf("�ҵ���\n");
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}

//strlen�ԡ�\0����Ϊ������־
//дһ���Լ���strlen���������ַ���
//����������
//�ݹ�
//ָ��-ָ��

//int my_strlen(const char* str)//ָ��str������
//{
//	int count = 0;
//	assert(str != NULL);//���ԣ�str���ܵ��ڿ�ָ�룬��ָ֤�����Ч��
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");//����ȥ����a�ĵ�ַ
//
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	char arr1[30] = "abc";
//	char arr2[] = "def";
//	strcat(arr1, arr2);//arr1�ĺ���׷��arr2
//	printf("%s\n", arr1);//abcdef
//	return 0;
//}