#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>//system
#include<string.h>//strcmp

//дһ���ػ����򣺳������У����Խ���1���Ӻ�ػ�����������������ȡ���ػ�
int main()
{
	char input[20] = { 0 };//���� �洢����
	//�ػ�
	//�⺯��system() - ר������ִ��ϵͳ�����
	system("shutdown -s -t 60");//�ػ�

again:
	printf("��ע��,��ĵ��Խ���һ�����ڹػ�,������룺������,��ȡ���ػ�\n");
	scanf("%s", input);//%s - �ַ��������������ַ�����
	if (strcmp(input, "������") == 0)//�ж�input�зŵ��ǲ��ǡ�������;strcmp - �ַ����Ƚ�
	{
		system("shutdown -a");//ȡ���ػ�
	}
	else
	{
		goto again;
	}
	return 0;
}


//��������int������ֵ������ʹ�õ�������������a=3��b=5������֮��a=5��b=3
//������� û�е�������

//int main()
//{
//	//�����������ͱ���
//	int a = 3;
//	int b = 5;
//
//	printf("����ǰ: a=%d b=%d\n", a, b);
//	// ^:���������ƣ�λ�����ͬλ0������Ϊ1
//	//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("������: a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	//�����������ͱ���
//	int a = 3;
//	int b = 5;
//
//	printf("����ǰ: a=%d b=%d\n", a, b);
//	//�������������
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("������: a=%d b=%d\n", a, b);
//
//	return 0;
//}

//��������������������
//int main()
//{
//	//�����������ͱ���
//	int a = 3;
//	int b = 5;
//	int c = 0;//��ƿ
//
//	printf("����ǰ: a=%d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("������: a=%d b=%d\n", a, b);
//
//	return 0;
//}