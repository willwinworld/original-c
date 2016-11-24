#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;	
};

struct date dateUpdate(struct date *today)
{
	struct date tomorrow;
	today = &date;
	int numberOfDays(struct date d);
	
	if(today->day != numberOfDays(today))
	{
		tomorrow.day = today->day + 1;
		tomorrow.month = today->month;
		tomorrow.year = today->year;
	}
	else if(today->month == 12)
	{
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}
	else
	{
		tomorrow.day = 1
		tomorrow.month += today->month + 1;
		tomorrow.year = today->year;
	}
	
	return tomorrow;
}


