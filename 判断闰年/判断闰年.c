#include<stdio.h>

int main()
{
	int i;
	scanf_s("%d", &i);
	if (i % 400 == 0)
		printf("是闰年");
	else if (i % 4 == 0 && i % 100 + !0)
		printf("是闰年");
	else
		printf("不是闰年");
	return 0;
}