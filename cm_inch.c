#include <stdio.h>

int main(void)
{
	const double FACTOR = 0.3048;
	int cm = 0;
	int foot, inch;
	foot = inch = 0;
	
	scanf("%d", &cm);
	
	double foot1 = cm / (100 * FACTOR); 
	foot = (int)foot1;
	inch = (int)((foot1 - foot) * 10 + 0.5);
	
	printf("%d %d", foot, inch);
	
	return 0;
}
