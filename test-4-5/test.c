#include<stdio.h>

//ָ�벿�ֱ��������

int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;//�ŵ���FIRST

	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);//�ȼ���**��cpp-2��+3
	printf("%s\n", cpp[-1][-1] + 1);//�ȼ���*��*��cpp-1��-1��+1
	return 0;
}


//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//
//	pa++;//pa+1
//	printf("%s\n", *pa);//%s�Ǵ�ӡ�ַ��� ���Ϊat
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	int *p = arr;
//	//*(p+2) == *(arr+2) == arr[2] //�ȼ۹�ϵ���������3
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//1 - 5;6 - 10������
//
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));//6
//
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ����ʼ����ȥ����1 3 5
//	int *p;
//	p = a[0];//��һ�е���������
//	printf("%d", p[0]);//p[0]�ȼ���p+0
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int*)(&a + 1);
//	int *ptr2 = (int*)((int)a + 1);//(int)a��ת����һ�����Σ���int*����ת���ɵ�ַ
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int*)(&a + 1);//ȡ��ַa+1�������������飬�ټ�1��5
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}