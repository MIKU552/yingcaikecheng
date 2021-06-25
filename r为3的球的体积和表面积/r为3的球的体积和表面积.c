#include <stdio.h>
#include <math.h>
# define PI 3.1415926

int main()
{
	double r, v, s;
	r = 3;
	v = 4 * PI * r * r * r / 3;
	s = 4 * PI * r * r;
	printf("v=%lf\ts=%lf\n", v, s);
	return 0;
}