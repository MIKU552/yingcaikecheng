﻿#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, k;
	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (100 * i + 10 * j + k == i * i * i + j * j * j + k * k * k)	printf("%d ", 100 * i + 10 * j + k);
			}
		}
	}
	return 0;
}