#include <stdio.h>

int main(void)
{
	int hour1, minute1;
	int hour2, minute2;
	int start, end, pass_time;
	
	scanf("%d %d", &start, &pass_time);
	
	hour1 = start / 100;
	minute1 = start % 100;
	int sum_minute = hour1 * 60 + minute1 + pass_time;
	hour2 = sum_minute / 60;
	minute2 = sum_minute % 60;
	end = hour2 * 100 + minute2;
	
	printf("%d\n", end);
	
	return 0;
}
