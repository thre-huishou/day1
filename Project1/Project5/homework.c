#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//
//int main()
//{
	/*char arr[] = "abscdf";*/
	//printf("%d\n", sizeof(arr));//7*1=7��Ҫ���ַ���ȫ�����ȣ�����\0 
	//printf("%d\n", sizeof(arr+0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr+1));//4�������������ĵ�ַ
	//printf("%d\n", sizeof(&arr[0]+1));//4�ڶ���Ԫ�صĵ�ַ

	//printf("%d\n", strlen(arr));// 6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//����
	////printf("%d\n", strlen(arr[1]));//����
	//printf("%d\n", strlen((const char *)&arr));//6&arr������������ָ��char (*)[],��strlen���յ���const char *����ǿ��ת��
	//printf("%d\n", strlen(&arr + 1));//���ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//5
	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));//4
	//printf("%d\n", sizeof(p+1));//4
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1 arr[0]=*(arr+0),p[0]=*(p+0)
	//printf("%d\n", sizeof(&p));//4
	//printf("%d\n", sizeof(&p+1));//4
	//printf("%d\n", sizeof(&p[0]+1));//4
	//printf("%d\n", strlen(p));//6��strlen�������鳤�� 
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//����
	////printf("%d\n", strlen(p[0]));//����
	//printf("%d\n", strlen(&p));//���
	//printf("%d\n", strlen(&p + 1));//���
	//printf("%d\n", strlen(&p[0] + 1));//5

	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//12*4=48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//����ڵ�����һά������16
	//printf("%d\n", sizeof(a[0]+1));//4�൱�ڵ�һ������+1������a[0][1]�ĵ�ַ
	//printf("%d\n", sizeof(*(a[0]+1)));//4��a[0][1]
	//printf("%d\n", sizeof(a+1));//4��a��ʾ��һ�е�����ĵ�ַ��a+1�ڶ��еĵ�ַ
	//printf("%d\n", sizeof(*(a+1)));//16
	//printf("%d\n", sizeof(&a[0]+1));//4��a[0]��һ�е���������ȥ��ַ���ǵ�һ�еĵ�ַ��+1���ǵڶ��еĵ�ַ
	//printf("%d\n", sizeof(*(&a[0]+1)));//4*4=16
	//printf("%d\n", sizeof(*a));//16��a��ʾ��һ�еĵ�ַ����һ������ȡֵ���ǵ�һ������
	//printf("%d\n", sizeof(a[3]));//16����ʾ����������

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
}*p;//����һ���ṹ��ָ��
//��֪�ṹ��ָ��p��ֵΪ0x100000
//��֪�ṹ��test���͵Ĵ�СΪ20���ֽ�
int main()
{
	//printf("%p\n", p + 0x1);//0x100014
	//printf("%p\n", (unsigned long)p+0x1);//0x100001
	//printf("%p\n", (unsigned int*)p + 0x1);//0x100004

	//int a[4] = { 1,2,3,4 };
	//int *ptr1 = (int*)(&a + 1);//ָ���������λ�ã�����Ϊ4���ֽ�
	//int *ptr2 = (int*)((int)a + 1);//ָ��ڶ���Ԫ�صĵ�ַ
	//printf("%x,%x", ptr1[-1], *ptr2);//ptr[-1]=*(ptr-1)=4��2

	//int a[3][2] = { (0,1),(2,3),(4,5) };//Բ�����Ƕ��ű��ʽ 
	//int* p;
	//p = a[0];//
	//printf("%d", p[0]);//0

	//int a[5][5];
	//int(*p)[4] = a;//a������Ϊ����ָ�룬ÿ���������5��Ԫ�أ�pΪ����ָ�룬ÿ��Ԫ�ذ���4��Ԫ��
	//printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//С�˴洢  fffffffc,-4 

	//int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	//int *ptr1 = (int *)(&aa + 1);
	//int *ptr2 = (int*)(*(aa + 1));
	//printf("%d, %d", *(ptr1 - 1), *(ptr2 - 1));//10,5

	//char *a[] = { "work","at","alibaba" };
	//char **pa = a;
	//pa++;
	//printf("%s\n", *pa);//at
	char *c[] = { "enter","new","point","first" };//ָ������
	char **cp[] = { c + 3,c + 2,c + 1,c };
	char ***cpp = cp;
	printf("%s\n", **++cpp);//point
	printf("%s\n", *--*++cpp + 3);//er
	printf("%s\n", *cpp[-2] + 3);//st
	printf("%s\n", cpp[-1][-1] + 1);//ew
	return 0; 
}