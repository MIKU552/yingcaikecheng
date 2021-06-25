#include<stdio.h>
#include<math.h>

int main()
{
	int flag , i, n = 2;
	printf("请输入数字：");
	scanf_s("%d", &i);
	do
	{
		flag = 1;
		if (i % n == 0 && i != 2 ||i==1)
		{
			flag = 0;
			break;
		}
		n++;
	} while (n <= sqrt(i));
	if (flag == 0)	printf("不是素数");
	else	printf("是素数");
	return 0;
}