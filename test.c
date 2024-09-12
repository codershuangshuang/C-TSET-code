#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include <math.h>
#define ROW 3
#define COL 3
//int main()
//{
//	printf("%zu\n",sizeof(char));
//    printf("%zu\n",sizeof(short));
//	printf("%zu\n",sizeof(int));
//	printf("%zu\n",sizeof(long));
//	printf("%zu\n",sizeof(long long));
//	printf("%zu\n",sizeof(float));
//	printf("%zu\n",sizeof(double));
//	return 0;
//}

//int main()
//{
//	/*int age = 20;
//	double price = 66.6;*/
//	/*int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d", sum);*/
//	/*char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f','\0'};
//	printf( "%s\n",arr1 );
//	printf("%s\n",arr2 );*/
//
//	//printf("\a");
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", p);
//	return 0;
//}
//int main()
//{
//	float v = 0.0f;
//	v = 4 / 3.0;
//	printf("%f\n", v);
//	return 0;
//
//
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//实现一个对整形数组的冒泡排序
//由大到小排序
//void maopao(int brr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//
//	///确定冒泡排序趟数
//	for (i = 0; i <= sz - 1; i++)
//	{     /*每一趟的冒泡排序进行几次（总趟数（次数）去掉沉底的）*/
//		//int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (brr[j] < brr[j + 1])
//			{
//				int tmp = brr[j];
//				brr[j] = brr[j + 1];
//				brr[j + 1] = tmp;
//			}
//
//		}
//
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,5,6,4,8,2,10,9,3,7 };
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("sz=%d\n", sz);     //计算得出sz=10
//	for (i = 0; i < 10; i++)
//	{
//		printf(" % d ", arr[i]);
//	}
//	printf("\n");
//	maopao(arr, sz);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf(" %d  ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", *arr);
//	printf("%d\n",& arr[0]);
//	printf("%d\n", &arr[0]+1);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	/*scanf("%d %d", &a, &b);*/
//	printf("%d\n", add(ROW, COL));
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//100000000000000000000000000000011
//	//111111111111111111111111111111100
//	//111111111111111111111111111111101
//	//000000000000000000000000000000010
//	if (!a)
//		printf("1");
//	else
//		printf("0");
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = {1,2,3,4,5,6};
//	int arr2[] = {1,2,3};
//    int ret = memcmp(arr1, arr2,16);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	struct Stu
//	{
//		int phonenumber[11];
//		int age;
//	};
//	struct Stu s1 = { {1,7,8,5,5,2,0,3,0,6,6},24 };
//	struct Stu* p = &s1;
//	printf("%d\n", (*p).phonenumber[1]);
//	return 0;
//}
//int main()
//{
//	struct s2
//	{
//		char arr[5];//1  0~4
//		char c2;//1    5
//		int i;//4  8~11   最后大小12字节
//	};
//	printf("%d\n", sizeof(struct s2));
//	//练习3
//	struct s3 
//	{
//		double d;
//		char c;
//		int i;
//	};
//	printf("%d\n", sizeof(struct s3));
//}
//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int a10 = 106;
//	int b = 10;
//#if b+3
//	printf("%d\n", CAT(a, 10));
//#endif
//	return 0;
//i
int main()
{
	struct A
	{
		int i;
		int* p;
	};
	printf("%d\n", sizeof(struct A));//8  X64下是16 p是一个指针，求得就是指针变量的内存
}