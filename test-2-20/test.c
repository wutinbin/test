#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>//����strcmp������ͷ�ļ�

//ģ���û������������λ����¼�ĳ���
int main()
{
	int i = 0;
	char password[20] = { 0 };//�������������˼
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);//����¼����
		if (strcmp(password, "921540") == 0)//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("�������������,�˳�����\n");
	return 0;
}
