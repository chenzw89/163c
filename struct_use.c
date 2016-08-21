#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct date {
		int month;
		int day;
		int year;
	};
	
	struct date today;
	
	today.month = 8;
	today.day = 2;
	today.year = 2016;
	
	printf("Today's date is %i-%i-%i.\n", 
		today.year, today.month, today.day);
	
	return 0;
 } 
