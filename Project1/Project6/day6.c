#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void nixu(char arr[], int num)
//{
//	int first = 0;
//	int end = 0;
//	for (first = 0, end = num-2; first < end; first++, end--)
//	{
//		int tmp = arr[first];
//		arr[first] = arr[end];
//		arr[end] = tmp;
//	}
//}
//int main()
//{
//	char arr[16] = "abcdefg";
//	int sz = sizeof(arr) / sizeof(arr[0]);
// 	nixu(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int num = 2;
//		for (j = 1; j < i; j++)
//		{
//			num = num * 10 + 2;
//		}
//		sum = sum + num;
//		
//		if (i == n)
//		{
//			printf("%d", num);
//		}
//		else
//		{
//			printf("%d+", num);
//		}
//	}
//	printf("=%d\n", sum);
//
//	return 0;
//
//}

//int main()
//{
//	int n = 13;
//	int kong = 0;
//	int xing = 0;
//	int i = 0; 
//	for (i = 0; i < 13; i++)
//	{
//		if (i < 7)
//		{
//			int j = 0;
//			for (j = 0; j < 6-i; j++)
//			{
//				printf("%c", ' ');
//			}
//			for (j = 0; j < 1 + 2 * i; j++)
//			{
//				printf("%c", '*');
//			}
//			for (j = 0; j < 6 - i; j++)
//			{
//				printf("%c", ' ');
//			}
//		}
//		else
//		{
//			int j = 0;
//			for (j = 0; j < i-6; j++)
//			{
//				printf("%c", ' ');
//			}
//			for (j = 0; j < 13- 2 * (i-6); j++)
//			{
//				printf("%c", '*');
//			}
//			for (j = 0; j < i - 6; j++)
//			{
//				printf("%c", ' ');
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int yuan = 0;
//	scanf("%d", &yuan);
//	int num = 0;//喝的瓶
//	int m = 0;
//	int n = 0;//空瓶
//	num = yuan;
//	n = num;
//	while (n >= 2)
//	{
//		m = n / 2;
//		num += m;
//		n = m + n % 2;
//	}
//	printf("共喝%d\n", num);
//	return 0;
//}
//常量是不能改变的，指向常量的指针一般是相同的。
//暴力求解法
#include<assert.h>
#include<string.h>
//void left_move(char* a, int num)
//{
//
//	assert(a != NULL);
//	int len = strlen(a);
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		char tmp = *a;
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(a + j) = *(a + j + 1);
//		}
//		*(a + len-1) = tmp;
//	}
//
//}
//int main()
//{
//	//左旋
//	char a[] = "abcde";
//	int num = 0;
//	scanf("%d", &num);
//	left_move(a, num);
//	printf("%s\n", a);
//	return 0;
//}

//三步翻转法
//abcdef
//bafedc
//cdefab
//void nixu(char* left, char* right)
//{
//
//	while (right - left>0)
//	{ 
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//void left_move(char* arr, int num)
//{
//	int len = strlen(arr);
//	nixu(arr, arr + num - 1);
//	nixu(arr + num, arr + len - 1);
//	nixu(arr, arr + len - 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int num = 0;
//	scanf("%d", &num);
//	left_move(arr, num);
//	printf("%s\n", arr);
//	//char * left = arr;
//	//char* right = arr + 5;
//	//printf("%d\n", right - left);
//	return 0;
//}
//int is_left_move(char* arr1, char* arr2)
//{
//	//1字符串扩展
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		*(arr1 + i + len) = *(arr1 + i);
//	}
//	*(arr1 + len * 2) = '/0';
//	//判断
//	char * ret=strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr, arr2);
//	if (ret == 1)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}

//杨氏矩阵
//利用右上角与右下角的数进行比较查找