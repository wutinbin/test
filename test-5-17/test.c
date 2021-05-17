#include<stdio.h>
#include<stddef.h>

//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	//offsetof计算结构体成员相对于起始位置的偏移量
//	//宏
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

struct S
{
	char c;
	int a;
	double d;
};

void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}

void Print1(struct S tmp)
{
	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
}

int main()
{
	struct S s = { 0 };
	Init(&s);
	Print1(s);

	/*struct S s;
	s.a = 100;
	s.c = 'w';
	s.d = 3.14;
	printf("%d\n", s.a);
	return 0;*/
}

//struct S
//{
//	char c1;
//	double d;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}