#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//arr�Ĵ�СΪָ��Ĵ�СΪ4��Ԫ�صĴ�СҲΪ4
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
	//printf("%s", a);//pritnf("%s",arr)arr��ʾ��������ַ������׵�ַ��ʹ��%s���ɴ�ӡ

	//char arr1[] = "abcdef";
	//char arr2[] = "abcdef";
	//const char *p1 = "abcdef";
	//const char *p2 = "abcdef";
	//if (p1 == p2)
	//{
	//	printf("haha");//�����ַ���ֻ����һ�ݣ�����p1��p2ָ��ͬһ����ַ
	//}
	//else
	//{
	//	printf("hehe");
	//}

	//����ָ��
	//int *p = NULL;//����ָ��
	//char * pc = NULL;
	//int arr[10]={ 1,2,3,4,5,6 };
	////int *pp = arr;//�����׵�ַ��ָ��
	////int *pp2 = &arr;//����ָ�벻�ܴ������ĵ�ַ
	//int (*pp)[10]=arr;//����ָ�붨��
	//char *arr[5];
	//char* (*p)[5] = &arr; //��ָ�������ַ��Ҫ����ָ�룬ͬʱ�����ڲ���ŵ����ַ�ָ�룬char*

	//int num[10] = { 1,2,3,4,5,6,7,8,9,0 };
	//int(*p)[10] = &num;
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	//printf("%d\n",  (*p)[i]);//*p==num����
	//	//printf("%d\n", *((*p) + i));

	//}

	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);//arr��ʾ�����ַ
	print2(arr, 3, 5);
	return 0;


}