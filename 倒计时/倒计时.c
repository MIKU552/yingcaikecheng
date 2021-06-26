#include <stdio.h>
#include <time.h>

int leap(int year)
{
	if (year % 400 == 0)
		return 1;
	else if (year % 4 == 0 && year % 100 != 0)
		return 1;
	else
		return 0;
}

int monthdays(int year, int month)
{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)	return 31;
	else if (leap(year) == 1 && month == 2);
	else if (month == 2) return 28;
	else return 30;
}

int main()
{
	int year, month, day, remain;
	time_t timer;
	struct tm *now;
	time(&timer);
	now=localtime(&timer);
	year = now->tm_year + 1900;
	month = now->tm_mon + 1;
	day = now->tm_mday;
	for (remain = 0; month <= 12; month++)
	{
		remain += monthdays(year, month);
	}
	remain -= day;
	printf("距离%d年元旦剩余%d天", year + 1, remain);
	return 0;
}