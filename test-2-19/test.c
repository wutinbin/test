#include<stdio.h>
#include<string.h>//����strlen��ͷ�ļ�
#include<windows.h>//����sleep��ͷ�ļ�
#include<stdlib.h>//����system������ͷ�ļ�
//��д����,��ʾ�ַ����˴��м��ƶ�
int main()
{
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = strlen(arr1) - 1;//�±����Ǳ�Ԫ�ظ�����,���Եü�1

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//��Ϣһ��
		Sleep(1000);//1000��ʾ����
		system("cls");//�����Ļ
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}

//��do whileѭ����ӡ1��10
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}