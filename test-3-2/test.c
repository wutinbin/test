#include<stdio.h>

//дһ���������Խ����������α���������

//Swap�����������
void Swap1(int x, int y)//void��ʾ�����������Ҫ����ֵ
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

//Swap2 ָ��ķ���
void Swap2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n", a, b);
	//Swap1(a, b);
	//����Swap2����
	Swap2(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d,b=%d\n", a, b);
//	tmp = a;//��a����tmp����Ϳ��Ըı�a��ֵ��
//	a = b;//��b��ֵ��a��Ϳ��Ըı�b��ֵ��
//	b = tmp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}