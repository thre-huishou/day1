#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//指针

//void test(int arr[])//√
//{}
//void test(int arr[10])//√
//{
//}
//void test(int *arr)//√
//{}
//
//void test1(int *arr1[10])//√，并且数组个数可以省略
//{}
//void test1(int **arr1)//√ 
//{}

//int main()
//{
//	char ch = 'w';
//	//char *p = &ch;
//	//char *p = "abcdrf";
//	//const char *p = "abcdef";
//	//指针数组
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int *p[10] = { &a,&b,&c };
//	//printf("%d\n", *p[0]);
//
//	//数组指针
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	//int(*p)[10] = &arr;
//	//printf("%d\n", (*p)[3]);
//	//int(*p[10])[5];//P是一个数组，每个元素是一个数组指针，有10个元素，么个数组指针指向的数组有5个元素
//
//	//数组的传参
//	int arr[10] = { 0 };
//	int *arr1[10] = { 0 };
//	test(arr);
//	test2(arr1);
//	return 0;
//}

//void test(int (*arr)[5])//数组指针接收
//{}
//void test1(int arr[3][5])//数组接收void test(int arr[][5])
//{}
 
//int main()
//{
//	//二维数组传参
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//typedef void(*pfun_t)(int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int c=add(a, b);
//	//printf("%d\n", c);
//	//printf("%p\n", &add);//
//	//printf("%p\n", add);
//	//int(*p)(int, int) = add;
//	//printf("%d\n",(*p)(a, b));
//	//终极套娃
//	//(*(void(*)())0)();
//	//void(*signal(int, void(*)(int)))(int);
//	pfun_t signal(int, pfun_t);
//	return 0;
//} 

//函数指针数组
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	char c = 0;
//	int end = 0;
//	int(*pc[4])(int, int) = {add,sub,mul,div};//sub\mul\div
//again:
//	printf("请输入计算表达式：\n");
//	scanf("%d%c%d", &a, &c, &b);
//	switch (c)
//	{
//	case '+':
//		printf("%d %c %d = %d\n", a, c, b, (*pc[0])(a, b));
//		break;
//	case '-':
//		printf("%d %c %d = %d\n", a, c, b, (*pc[1])(a, b));
//		break;
//	case '*':
//
//		printf("%d %c %d = %d\n", a, c, b, (*pc[2])(a, b));
//		break;
//	case '/':
//		if (b == 0)
//		{
//			printf("被除数不能为0\n");
//			goto again;
//		}
//		printf("%d %c %d = %d\n", a, c, b, (*pc[3])(a, b));
//		break;
//	default:
//		printf("输入运算符错误，请重新输入！");
//		goto again;
//	}
//	
//}

//char * my_strcpy(char *dest, const char * src)
//{
//	char *temp = dest;
// 	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//	return temp;
//}
//
//int main()
//{
//	char * (*pf)(char *, const char *) = my_strcpy;
//	char * (*pfs[4])(char *, const char*) = { my_strcpy ,my_strcpy ,my_strcpy ,my_strcpy };
//	char aa[] = "abcdef";
//	char bb[] = "bbbbbb";
//	//printf("%s\n",pf(&bb,&aa));
//	printf("%s\n", my_strcpy(&bb, &aa));
//	return 0;
//}

//回调函数
void print(char *str)
{
	printf("hehe:%s", str);
}
void test(void(*p)(char *))
{
	printf("test\n");
	p("bit");
}
int main()
{
	test(print);
	return 0;
}