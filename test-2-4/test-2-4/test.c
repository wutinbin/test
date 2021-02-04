//指针
#include <stdio.h>

//int main()
//{
//
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%d\f", sizeof (pd));//sizeof函数计算字节
//	return 0;
//}

struct Book
{
	char name[20];//c语言程序设计
	short price;//55
};

int main()
{
	struct Book b1 = { "c语言程序设计", 55 };//书名和价格
	struct Book* pb = &b1;//第二部分 利用指针方法打印
	printf("%s\n", pb->name);// ->：结构体指针->成员
	printf("%d\n", pb->price);
	//printf("书名：%s\n", b1.name);第一部分
	//printf("价格：%d元\n", b1.price);
	return 0;
}