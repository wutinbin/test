//ָ��
#include <stdio.h>

//int main()
//{
//
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%d\f", sizeof (pd));//sizeof���������ֽ�
//	return 0;
//}

struct Book
{
	char name[20];//c���Գ������
	short price;//55
};

int main()
{
	struct Book b1 = { "c���Գ������", 55 };//�����ͼ۸�
	struct Book* pb = &b1;//�ڶ����� ����ָ�뷽����ӡ
	printf("%s\n", pb->name);// ->���ṹ��ָ��->��Ա
	printf("%d\n", pb->price);
	//printf("������%s\n", b1.name);��һ����
	//printf("�۸�%dԪ\n", b1.price);
	return 0;
}