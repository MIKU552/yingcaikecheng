#include<stdio.h>
int factorial(int n)
{
	int i, result = 1;
	for (i = 1; i <= n; i++)	result *= i;
	return result;
}
int combinatorial(int n, int m)
{
	int result;
	result = factorial(n) / factorial(m) / factorial(n - m);
	return result;
}
int main()
{
	int n, m;
	scanf_s("%d%d", &n, &m);
	printf("%d", combinatorial(n, m));
	return 0;
}