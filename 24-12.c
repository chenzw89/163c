#include <stdio.h>

int main(void)
{
	int speed;
	
	scanf("%d", &speed);
	if ( speed<=60 ) {
		printf("Speed: %d - OK\n", speed);
	} else {
		printf("Speed: %d - Speeding\n", speed);
	}
	
	getchar();
	return 0;
}
