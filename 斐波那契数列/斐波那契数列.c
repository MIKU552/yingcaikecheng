#include<stdio.h>
int main()
{
	int a[30];
	int i;
	a[0] = 1;
	a[1] = 1;
	printf("%d %d ", a[0], a[1]);
	for (i = 2; i <= 29; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		printf("%d ", a[i]);
	}
	return 0;
}