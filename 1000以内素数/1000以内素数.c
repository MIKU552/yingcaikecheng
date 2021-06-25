#include<stdio.h>
#include<math.h>

int main()
{
	int flag, i, n;
	printf("2 ");
	for (i =3; i <= 1000; i+=2)
	{
		flag = 1,n = 2;
		do
		{
			if (i % n == 0 )
			{
				flag = 0;
				break;
			}
			n++;
		} while (n <= sqrt(i));
		if (flag == 1)	printf("%d ", i);
	}
	return 0;
}