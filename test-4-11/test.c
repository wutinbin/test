#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<assert.h>

void reverse(char* str)
{
	assert(str);
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;

	while (left<right)
	{
		char* tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
		
	}
}

int main()
{
	char arr[256] = { 0 };
	//scanf("%s", arr);
	gets(arr);//��ȡһ��
	//������
	reverse(arr);

	printf("�������ַ�����%s\n", arr);
	return 0;
}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�1ƿ��ˮ����20���Ի�����ƿ

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//���������ˮ�ȵ�
//	total = money;
//	empty = money;
//	//����������ˮ
//	while (empty >= 2)
//	{
//		total += empty /= 2;//�������Ͽ�ƿ������
//		empty = empty / 2 + empty % 2;//empty%2�ǻ����������Ŀ�ƿ
//	}
//	printf("total=%d\n", total);
//	return 0;
//}
//

//�������

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);//¼������ֵ
//	//����a��ɵ�ǰn��֮��
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

