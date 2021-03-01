#include<stdio.h>

//写一个函数可以交换两个整形变量的内容

//Swap不能完成任务
void Swap1(int x, int y)//void表示这个函数不需要返回值
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

//Swap2 指针的方法
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
	//调用Swap2函数
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
//	tmp = a;//把a存在tmp里面就可以改变a的值了
//	a = b;//把b的值放a里就可以改变b的值了
//	b = tmp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}