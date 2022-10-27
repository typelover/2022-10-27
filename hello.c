//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d",&a,&b);
//	c = a + b;
//	printf("c=%d\n", c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arrl[] = "abc";
//	char arrl2[] = { 'a','b','c',"\0"};
//	/*printf("%s\n", arrl);
//	printf("%s\n", arrl2);*/
//	printf("%d\n", strlen(arrl));
//	printf("%d\n", strlen(arrl2));
//	return 0;
//}\

//int main()
//{
//	printf("djis\\t/kfd\thsdashdjas\n");
//	//printf("'\''");
//	printf("%c\n", '\"');
//	return 0;
//
//}
//#include <string.h>
//int main()
//{
//	/*printf("%d\n", strlen("\23"));
//	printf("%s\n", "j\td");*/
//	//printf("\32\n");
//	printf("%c\n", '\32');
//	return 0;




#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("加入比特，");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//
//	return 0;

//int main()
//{
//	int number = 0;
//	printf("加入比特\n");
//	while (number < 20000)
//	{
//		printf("敲一行代码%d\n", number);
//		number++;
//	}
//	if (number >= 20000)
//		printf("好offer\n");
//		
//	return 0;
//}
//
//int main()
//{
//	int  a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x * y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 0;
//	while (a <= 9)
//	{
//		printf("%d\n", arr[a]);
//		a++;
//	}
//	return 0;
//
//}

//
//int main()
//{
//	int a = 7;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a & b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", !a);
//	return 0;
//}

//int main()
//{
//	char arr[] = { '1','2','3' ,'\0'};
//	printf("%d\n"  , strlen(arr));
//	return 0;
//}
//
//int main()
//{
//	printf("%s\n", \b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}
//
//int main()
//{
//	int a = (int )3.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 30;
//	int b = 20;
//	a > b ? printf("%d\n", a) : printf("%d\n", b);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;

//
//int main()
//{
//	typedef unsigned int u_int;
//	u_int a = 20;
//	u_int b = -20;
//	printf("a=%d b=%d", a, b);
//	return 0;

//
//void test()
//{
//	 static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		printf("i=%d\n", i);
//		i++;
//	}
//		
//	return 0;
//}

//int main()
//{
//	extern int num;
//	printf("num=%d\n", num);
//	return 0;
//}
////
//
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a+b=%d\n", Add(a, b));
//	return 0;
//}


//#define Max 100
//int main()
//
//{
//	int a = Max;
//	printf("a=%d\n", a);
//	return 0;
//}
//
//extern Max(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//
//	return 0;
//}


//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int max = MAX(a, b);
////	printf("max=%d\n", max);
////	return 0;
////}
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d\n", sizeof(p));
//	/**p = 2;
//	
////	printf("a=%d\n", a);*/
//int main()
//{
//	int a = 0;
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		a += 1;
//		printf("a=%d\n", a);
//
//	}
//	return 0;
//}
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "平凡之路",55 };
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d\n", b1.price);
//
//	return 0;
//}
//
//struct Computer
//{
//	char name [20];
//	short price;
//	
//};
//int main()
//{
//	struct Computer c1 = { "荣耀最新版",5000 };
//	printf("电脑名字：%s\n", c1.name);
//	printf("价格为：%d\n", c1.price);
//	c1.price = 4500;
//	printf("修改后的价格为：%d\n", c1.price);
//	return 0;
//}
//
//
struct Computer
{
	char name [20];
	short price;
};
int main()
{
	struct Computer c2 = { "游戏本",6000 };
	struct Computer* p2 = &c2;
	printf("%s\n", p2->name);
	printf("%d\n", p2->price); 
	return 0;
}


struct women
{
	char name[20];
	short height;
	short face;
};
int main()
{
	struct women z = { "zengningxing",165,86 };
	struct women* p1 = &z;
	printf("her name is %s\n", p1->name);
	printf("her height is %d\n", p1->height);
	printf("I think her face is %d\n", p1->face);

	return 0;
}