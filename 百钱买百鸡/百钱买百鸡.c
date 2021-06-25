//公鸡5元 母鸡3元 小鸡一元三个
#include<stdio.h>
int main()
{
	int a, b, c;
	for (a = 0; a <= 20; a++)
	{
		for (b = 0; b < 34; b++)
		{
			for (c = 0; c <= 99; c = c + 3)
			{
				if (5 * a + 3 * b + c / 3 == 100 && a + b + c == 100)	printf("公鸡%d只\n母鸡%d只\n小鸡%d只\n\n", a, b, c);
			}
		}
	}
	return 0;
}