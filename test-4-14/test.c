#include<stdio.h>

//������
//5���˶�Ա�μ���10��̨��ˮ�˶�������������Ԥ��������
//A˵��B�ڶ����ҵ���
//B˵���ҵڶ���E����
//C˵���ҵ�һ��D�ڶ�
//D˵��C����ҵ���
//E˵���ҵ��ģ�A��һ
//ÿ��ѡ�ֶ�˵����һ�룬����ȷ������������

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b==2) + (a==3) == 1) && 
							((b==2) + (e==4) == 1) && 
							((c==1) + (d==2) == 1) &&
							((c==5) + (d==3) == 1) &&
							((e==4) + (a==1) == 1))//�������ʽ�������������1��˵��ÿ��ֻ˵����һ��
						{
							if (a*b*c*d*e==120)//���������������abcde��12345
								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
	return 0;
}


//��ת�ַ���
//���磺ABCD����һ���ַ����õ�BCDA ���������õ�CDAB

//�����ַ�������

//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	arrert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k, arr + len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//��������
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);//һ���������ת����k
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		//3��˵���滰��1��˵�˼ٻ� 
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}


//��������
//��36ƥ��6���ܵ���û�м�ʱ����������ȷ��ǰ3��
//������������