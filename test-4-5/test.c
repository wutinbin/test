#include<stdio.h>

//指针部分笔试题详解

int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;//放的是FIRST

	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);//等价于**（cpp-2）+3
	printf("%s\n", cpp[-1][-1] + 1);//等价于*（*（cpp-1）-1）+1
	return 0;
}


//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//
//	pa++;//pa+1
//	printf("%s\n", *pa);//%s是打印字符串 结果为at
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	int *p = arr;
//	//*(p+2) == *(arr+2) == arr[2] //等价关系，结果都是3
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//1 - 5;6 - 10两部分
//
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));//6
//
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式，初始化进去的是1 3 5
//	int *p;
//	p = a[0];//第一行的数组名·
//	printf("%d", p[0]);//p[0]等价于p+0
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int*)(&a + 1);
//	int *ptr2 = (int*)((int)a + 1);//(int)a是转换成一个整形，（int*）是转换成地址
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int*)(&a + 1);//取地址a+1是跳过整个数组，再减1是5
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}