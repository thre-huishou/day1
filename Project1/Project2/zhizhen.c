#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//arr的大小为指针的大小为4，元素的大小也为4
//	printf("%d\n", sz);
//}

void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int(*arr)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			//printf("%d", *((*(arr + i)) + j));
			/*printf("%d ", (*(arr+i))[j]);*/
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	
	//int arr[10] = { 0 };
	//test(arr);
	//char* a = "abcdef";
	//printf("%s", a);//pritnf("%s",arr)arr表示数组或者字符串的首地址，使用%s即可打印

	//char arr1[] = "abcdef";
	//char arr2[] = "abcdef";
	//const char *p1 = "abcdef";
	//const char *p2 = "abcdef";
	//if (p1 == p2)
	//{
	//	printf("haha");//常量字符串只保存一份，所以p1与p2指向同一处地址
	//}
	//else
	//{
	//	printf("hehe");
	//}

	//数组指针
	//int *p = NULL;//整形指针
	//char * pc = NULL;
	//int arr[10]={ 1,2,3,4,5,6 };
	////int *pp = arr;//数组首地址的指针
	////int *pp2 = &arr;//整型指针不能存放数组的地址
	//int (*pp)[10]=arr;//数组指针定义
	//char *arr[5];
	//char* (*p)[5] = &arr; //首指向数组地址需要数组指针，同时数组内部存放的是字符指针，char*

	//int num[10] = { 1,2,3,4,5,6,7,8,9,0 };
	//int(*p)[10] = &num;
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	//printf("%d\n",  (*p)[i]);//*p==num数组
	//	//printf("%d\n", *((*p) + i));

	//}

	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);//arr表示数组地址
	print2(arr, 3, 5);
	return 0;


}