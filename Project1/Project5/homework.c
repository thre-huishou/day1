#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//
//int main()
//{
	/*char arr[] = "abscdf";*/
	//printf("%d\n", sizeof(arr));//7*1=7需要算字符串全部长度，包含\0 
	//printf("%d\n", sizeof(arr+0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr+1));//4跳过整个数组后的地址
	//printf("%d\n", sizeof(&arr[0]+1));//4第二个元素的地址

	//printf("%d\n", strlen(arr));// 6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//错误
	////printf("%d\n", strlen(arr[1]));//错误
	//printf("%d\n", strlen((const char *)&arr));//6&arr的类型是数组指针char (*)[],而strlen接收的是const char *类似强制转换
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5
	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));//4
	//printf("%d\n", sizeof(p+1));//4
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1 arr[0]=*(arr+0),p[0]=*(p+0)
	//printf("%d\n", sizeof(&p));//4
	//printf("%d\n", sizeof(&p+1));//4
	//printf("%d\n", sizeof(&p[0]+1));//4
	//printf("%d\n", strlen(p));//6，strlen计算数组长度 
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//错误
	////printf("%d\n", strlen(p[0]));//错误
	//printf("%d\n", strlen(&p));//随机
	//printf("%d\n", strlen(&p + 1));//随机
	//printf("%d\n", strlen(&p[0] + 1));//5

	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//12*4=48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//相对于单独放一维数组名16
	//printf("%d\n", sizeof(a[0]+1));//4相当于第一行数组+1，就是a[0][1]的地址
	//printf("%d\n", sizeof(*(a[0]+1)));//4，a[0][1]
	//printf("%d\n", sizeof(a+1));//4，a表示第一行的数组的地址，a+1第二行的地址
	//printf("%d\n", sizeof(*(a+1)));//16
	//printf("%d\n", sizeof(&a[0]+1));//4，a[0]第一行的数组名，去地址就是第一行的地址，+1就是第二行的地址
	//printf("%d\n", sizeof(*(&a[0]+1)));//4*4=16
	//printf("%d\n", sizeof(*a));//16，a表示第一行的地址，第一行数组取值就是第一行数组
	//printf("%d\n", sizeof(a[3]));//16，表示第四行数组

	//int a[5] = { 1,2,3,4,5 };
	//int * ptr = (int *)(&a + 1);
	//printf("%d %d", *(a + 1), *(ptr - 1));//2,5
	 
//
//	return 0;
//}

struct test
{
	int num;
	char *pcname;
	short sdate;
	char cha[2];
	short sba[4];
}*p;//建立一个结构体指针
//已知结构体指针p的值为0x100000
//已知结构体test类型的大小为20个字节
int main()
{
	//printf("%p\n", p + 0x1);//0x100014
	//printf("%p\n", (unsigned long)p+0x1);//0x100001
	//printf("%p\n", (unsigned int*)p + 0x1);//0x100004

	//int a[4] = { 1,2,3,4 };
	//int *ptr1 = (int*)(&a + 1);//指向数组结束位置，长度为4个字节
	//int *ptr2 = (int*)((int)a + 1);//指向第二个元素的地址
	//printf("%x,%x", ptr1[-1], *ptr2);//ptr[-1]=*(ptr-1)=4，2

	//int a[3][2] = { (0,1),(2,3),(4,5) };//圆括号是逗号表达式 
	//int* p;
	//p = a[0];//
	//printf("%d", p[0]);//0

	//int a[5][5];
	//int(*p)[4] = a;//a的类型为数组指针，每个数组包含5个元素；p为数组指针，每个元素包含4个元素
	//printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//小端存储  fffffffc,-4 

	//int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	//int *ptr1 = (int *)(&aa + 1);
	//int *ptr2 = (int*)(*(aa + 1));
	//printf("%d, %d", *(ptr1 - 1), *(ptr2 - 1));//10,5

	//char *a[] = { "work","at","alibaba" };
	//char **pa = a;
	//pa++;
	//printf("%s\n", *pa);//at
	char *c[] = { "enter","new","point","first" };//指针数组
	char **cp[] = { c + 3,c + 2,c + 1,c };
	char ***cpp = cp;
	printf("%s\n", **++cpp);//point
	printf("%s\n", *--*++cpp + 3);//er
	printf("%s\n", *cpp[-2] + 3);//st
	printf("%s\n", cpp[-1][-1] + 1);//ew
	return 0; 
}