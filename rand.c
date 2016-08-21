#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));
	int n = rand();
	
	printf("%d\n", n%100/2);
	
	return 0;
}
