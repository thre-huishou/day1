#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//void maopao(int arr[], int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		for (int j = i+1; j < num; j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				int temp = 0;
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}

//int main()
//{
//	////指针
//	//int *p;
//	////指针数组
//	//int *p[10];
//	////数组指针
//	//int(*p)[10];
//	////函数指针
//	//int(*p)(int, int);
//	////函数指针数组
//	//int(*p[10])(int, int);
//	////指向函数指针数组的指针
//	//int(*(*p)[10])(int, int);
//
//	 //回调函数：通过函数指针调用的函数
//
//	int arr[10] = { 9,5,2,6,4,3,8,7,1,0 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr, num);
//	print(arr, num);
//	return 0;
//}
struct stu
{
	char name[20];
	int age;
};

void print(struct stu arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("%s\n", arr[i].name);
		printf("%d\n", arr[i].age);
	}
}
int com_int(const void * e1, const void *e2)
{
	return (*(int *)e1 - *(int *)e2);
}
int com_flot(const void * e1, const void *e2)
{
	//return (float)(*(float *)e1 - *(float *)e2)
	if (*(float *)e1 == *(float *)e2)
	{
		return 0;
	}
	else if (*(float *)e1 > *(float *)e2)
	{
		return 1;
	}
	else
		return -1;
}
int com_stu_age(const void * e1, const void *e2)
{
	if ((((struct stu *)e1)->age) == ((struct stu *)e2)->age)
	{
		return 0;
	}
	else if ((((struct stu *)e1)->age) > ((struct stu *)e2)->age)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int com_stu_name(const void * e1, const void *e2)//字符串比较不能直接用<、>号来比较，应该用strcmp函数
{
	return strcmp(((struct stu *)e1)->name, ((struct stu *)e2)->name);
}

void swap(char* e1,char* e2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = 0;
		tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void q_sort(void *base, size_t num, size_t width, int(*p)(const void * e1, const void *e2))
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i-1; j++)
		{
			if (p((char*)base+j*width,(char*)base+(j+1)*width))
			{
				swap((char*)base + j * width, (char*)base + (j + 1)*width,width);
			}
		}
	}
}
void test1()
{
	int arr1[10] = { 8,7,9,6,3,2,5,4,1,0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	qsort(arr1, sz, sizeof(arr1[0]), com_int);
	print(arr1, sz);
}
void test2()
{
	float arr2[10] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,0.0 };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	qsort(arr2, sz, sizeof(arr2[0]), com_flot);
	print(arr2, sz);
}
void test3()
{
	struct stu s[3] = { {"zhangsan",15},{"lisi",14},{"wanger",16} };
	int sz = sizeof(s) / sizeof(s[0]);
	q_sort(s, sz, sizeof(s[0]), com_stu_name);
	print(s,sz);
}

int main()
{
	test3();
	//test2();
	//test1();
	return 0;
}

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	char *pp = &a;
//	char b = 'w';
//	char *ppp = &b;
//	void *pppp = &a;//接收任意类型的地址
//	pppp = &b;
//	*pppp = 11;//void类型的指针不能进行解引用操作,pppp++也不行。 
//	return 0;
//}

 