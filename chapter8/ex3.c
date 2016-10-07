# include <stdio.h>

struct time
{
	int hour;
	int minute;
	int second;
};

struct time elapsed_time(struct time time1, struct time time2)
{
	struct time interval;
	int total1, total2, difference, 
	elapsed_hour, elapsed_minute, elapsed_second;
	int another1, another2;
	
	total1 = time1.hour * 3600 + time1.minute * 60 + time1.second;
	total2 = time2.hour * 3600 + time2.minute * 60 + time2.second;
	
	if (time2.hour >= time1.hour)
	{   
	    difference = total2 - total1;
	    
		if (difference >= 3600)
		{
			elapsed_hour = difference / 3600;
			elapsed_minute = (difference % 3600) / 60;
			elapsed_second = (difference % 3600) % 60;	
		}
		else if (60 <= difference < 3600)
		{
			elapsed_hour = 0;
			elapsed_minute = difference / 60;
			elapsed_second = difference % 60;	
		}
		else
		{
			elapsed_hour = 0;
			elapsed_minute = 0;
			elapsed_second = difference;	
		} 
	}
	else  //  ¿çÎçÒ¹µÄÇé¿ö 
	{
		another1 = 24 * 3600 - total1;
		another2 = total2;
		difference = another1 + another2;
		elapsed_hour = difference / 3600;
		elapsed_minute = (difference % 3600) / 60;
		elapsed_second = (difference % 3600) % 60;
	}
	interval.hour = elapsed_hour;
	interval.minute = elapsed_minute;
	interval.second = elapsed_second;
	
	return interval;
}

int main(void)
{
	struct time elapsed_time(struct time time1, struct time time2);
	struct time time1, time2, result;
	
	printf("Enter time (hh mm ssss): ");
	scanf("%i:%i:%i", &time1.hour, &time1.minute, &time1.second);
	
	printf("Enter another time (hh mm ssss): ");
	scanf("%i:%i:%i", &time2.hour, &time2.minute, &time2.second);
	
	result = elapsed_time(time1, time2);
	
	printf("Time difference between times is %.2i:%.2i:%.2i\n", result.hour, result.minute, result.second);
	
	return 0;
}


