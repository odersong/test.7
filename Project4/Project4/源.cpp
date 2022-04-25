#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 50;
//	int b = 20;
//	int max = 0;
//	max=get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//函数的定义
//int Add(int x,int y)  //返回类型，函数名，函数参数
//{
// //函数体
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 20;
//	int b = 50;
//	int sum = Add (a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "hell bit";
//	char arr2[20] = "**********";
//	strcpy(arr2, arr1);//strcpy是copy的意思
//	printf("%s\n", arr2);
//	return 0;
//}




//memory 内存，set 设置  memset
//int main()
//{
//	char arr1[] = "hello how are you?";
//	memset(arr1, '*', 5);
//	printf("%s\n", arr1);
//	return 0;
//}


//实际参数：真实传给函数的参数，叫实参。实参可以是：常量，变量，表达式，函数等。无论实参是何种类型
// 的量，在进行函数调用时，他们都必须有确定的值，以便把这些值传给形参。
//形式参数：是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化（分配内存单元），
// 所以叫形式参数。形式参数当函数调用完后就自动销毁了。因此形式参数只在函数中有效。
// 我么可以简单地认为：形式实例化之后其实相当于实参的一份临时拷贝
//x和y都是形式参数，&a和&b都是实际参数
//void Swap(int* x, int* y)//指针变量是用来接收地址的int* x接收&a
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//    Swap(&a, &b);
//	printf("a=%d b=%d\n", a,b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa指针变量
//	*pa;//解引用操作符
//	return 0;
//}

//传值调用：函数的形参和实参分别占有不同的内存块，对形参的修改不会影响实参。
//传址调用：把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式，
//这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量。


//写一个函数可以判断100-200之间的素数


//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//1000-2000年之间的闰年
//int is_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//二分法找下标
//int binary_searce(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]> k)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				return mid;
//			}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_searce(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//    return 0;
//}


//下一个函数，每调用一次这个函数，就会将num的值增加1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//函数的嵌套调用
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}


//函数的链式访问
//int main()
//{
//	//int len = 0;
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//	return 0;
//}


//int mian()
//{
//	printf("%d", printf("%d", printf("%d",43)));//打印出来是4321  第一个返回值是43 ， 第二次的返回值是2，printf打印的是字符个数第二次打印2，第三次返回值是1，打印一个字符1
//	return 0;
//}


//#include "Add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}




//函数递归：程序调用自身的编程技巧称为递归。一个过程或函数在其定义或说明中有直接或间接调用自身的一种方法，
//它通常把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题来求解，递归策略只需少量的程序就可
//描述出问题过程所需要的多次重复计算，大大减少了程序的代码量。
//递归的主要思考方式在于：把大事化小。
//递归的两个必要条件：
//  1.存在限制条件，当满足这个限制条件时，递归便不再继续
//  2.每次递归调用之后越来越接近这个限制条件


//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}


//接受与一个整型值（无符号），按照顺序打印它的每一位。例如：1234，输出1 2 3 4
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//一层一层递归，不能递归时，原路返回,将之前的程序运行完
//	}
//	printf("%d ",n%10);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}



//求字符串长度
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//编写函数不允许创建临时变量，求字符串长度
//递归的方法
//大事化小
//int my_strlen(char* i)
//{
//	if (*i != '\0')
//		return 1 + my_strlen(i + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
// //模拟实现了一个strlen函数
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串长度
//int my_strlen(char* i)
//{
//	int count = 0;
//	while (*i != '\0')
//	{
//		i++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
// 模拟实现了一个strlen函数
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}


//递归与迭代
//求n的阶乘

//用循环求的阶乘
//int fac(int n)
//{
//	int j = 0;
//	int a = 1;
//	for (j = 1; j <= n; j++)
//	{
//		a *= j;
//	}
//	return a;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}


//递归与迭代
//求n的阶乘
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}



//求第n个斐波那契数（不考虑溢出）
//斐波那契数列：1 1 2 3 5 8 13 21 34 55......
//用函数描述第n个斐波那契数
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//优化使用迭代求斐波那契数
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret = fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//汉诺塔问题   广联达
//青蛙跳台阶   n个台阶，一次可以跳一个台阶，一次也可以跳两个台阶
//这只青蛙想跳到第n个台阶，有多少种跳法



//数组的创建
//type_t 是指数组的元素类型
//const_n 是一个常量表达式，用来指定数组的大小
//arr_name 是数组名
//数组的初始化：在创建数组的同时给数组的内容一些合理初始值（初始化）。
//int arr[10] = { 1,2,3 };这个是不完全初始化，剩下的元素默认为0。
//char arr[10]={'a' ,'b'};剩下的元素默认为0。
//char arr[5] = "ab";里面的a，b，\0和剩下的两个零，\0的码值也是0。
//char arr[] = "abcdef";没有指定数组大小，元素是'a','b','c','d','e','f','\0'
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//sizeof 是计算arr所占空间的大小
//strlen 是求字符串长度  到\0,但是不取\0。
