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

//�����Ķ���
//int Add(int x,int y)  //�������ͣ�����������������
//{
// //������
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
//	strcpy(arr2, arr1);//strcpy��copy����˼
//	printf("%s\n", arr2);
//	return 0;
//}




//memory �ڴ棬set ����  memset
//int main()
//{
//	char arr1[] = "hello how are you?";
//	memset(arr1, '*', 5);
//	printf("%s\n", arr1);
//	return 0;
//}


//ʵ�ʲ�������ʵ���������Ĳ�������ʵ�Ρ�ʵ�ο����ǣ����������������ʽ�������ȡ�����ʵ���Ǻ�������
// �������ڽ��к�������ʱ�����Ƕ�������ȷ����ֵ���Ա����Щֵ�����βΡ�
//��ʽ��������ָ�������������еı�������Ϊ��ʽ����ֻ���ں��������õĹ����в�ʵ�����������ڴ浥Ԫ����
// ���Խ���ʽ��������ʽ�������������������Զ������ˡ������ʽ����ֻ�ں�������Ч��
// ��ô���Լ򵥵���Ϊ����ʽʵ����֮����ʵ�൱��ʵ�ε�һ����ʱ����
//x��y������ʽ������&a��&b����ʵ�ʲ���
//void Swap(int* x, int* y)//ָ��������������յ�ַ��int* x����&a
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
//	int* pa = &a;//paָ�����
//	*pa;//�����ò�����
//	return 0;
//}

//��ֵ���ã��������βκ�ʵ�ηֱ�ռ�в�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ�Ρ�
//��ַ���ã��Ѻ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ��
//���ִ��η�ʽ�����ú����ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı�����


//дһ�����������ж�100-200֮�������


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


//1000-2000��֮�������
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


//���ַ����±�
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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//    return 0;
//}


//��һ��������ÿ����һ������������ͻὫnum��ֵ����1
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


//������Ƕ�׵���
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


//��������ʽ����
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
//	printf("%d", printf("%d", printf("%d",43)));//��ӡ������4321  ��һ������ֵ��43 �� �ڶ��εķ���ֵ��2��printf��ӡ�����ַ������ڶ��δ�ӡ2�������η���ֵ��1����ӡһ���ַ�1
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




//�����ݹ飺�����������ı�̼��ɳ�Ϊ�ݹ顣һ�����̻������䶨���˵������ֱ�ӻ��ӵ��������һ�ַ�����
//��ͨ����һ�����͸��ӵ�������ת��Ϊһ����ԭ�������ƵĹ�ģ��С����������⣬�ݹ����ֻ�������ĳ���Ϳ�
//�����������������Ҫ�Ķ���ظ����㣬�������˳���Ĵ�������
//�ݹ����Ҫ˼����ʽ���ڣ��Ѵ��»�С��
//�ݹ��������Ҫ������
//  1.�������������������������������ʱ���ݹ�㲻�ټ���
//  2.ÿ�εݹ����֮��Խ��Խ�ӽ������������


//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}


//������һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺1234�����1 2 3 4
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//һ��һ��ݹ飬���ܵݹ�ʱ��ԭ·����,��֮ǰ�ĳ���������
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



//���ַ�������
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//��д��������������ʱ���������ַ�������
//�ݹ�ķ���
//���»�С
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
// //ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}

//��д��������������ʱ���������ַ�������
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
// ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}


//�ݹ������
//��n�Ľ׳�

//��ѭ����Ľ׳�
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


//�ݹ������
//��n�Ľ׳�
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



//���n��쳲��������������������
//쳲��������У�1 1 2 3 5 8 13 21 34 55......
//�ú���������n��쳲�������
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

//�Ż�ʹ�õ�����쳲�������
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


//��ŵ������   ������
//������̨��   n��̨�ף�һ�ο�����һ��̨�ף�һ��Ҳ����������̨��
//��ֻ������������n��̨�ף��ж���������



//����Ĵ���
//type_t ��ָ�����Ԫ������
//const_n ��һ���������ʽ������ָ������Ĵ�С
//arr_name ��������
//����ĳ�ʼ�����ڴ��������ͬʱ�����������һЩ�����ʼֵ����ʼ������
//int arr[10] = { 1,2,3 };����ǲ���ȫ��ʼ����ʣ�µ�Ԫ��Ĭ��Ϊ0��
//char arr[10]={'a' ,'b'};ʣ�µ�Ԫ��Ĭ��Ϊ0��
//char arr[5] = "ab";�����a��b��\0��ʣ�µ������㣬\0����ֵҲ��0��
//char arr[] = "abcdef";û��ָ�������С��Ԫ����'a','b','c','d','e','f','\0'
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//sizeof �Ǽ���arr��ռ�ռ�Ĵ�С
//strlen �����ַ�������  ��\0,���ǲ�ȡ\0��
