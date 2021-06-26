#include<stdio.h>

//一般解法
//int main()
//{
//	int i, n, s = 1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//		s = s * i;
//	printf("%d", s);
//	return 0;
//}

//自定义函数解法
int factorial(int n)
{
	int i,result = 1;
	for (i = 1;i <= n;i++)	result *= i;
	return result;
}
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d", factorial(n));
	return 0;
}