#include <stdio.h>

int main(void)
{
	int x, i;
	int isPrime = 1; //假设x是素数 
	
	scanf("%d", &x);
	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			isPrime = 0;
			break; 
		}
	}
	if (isPrime ==1) {
		printf("是素数\n");
	} else {
		printf("不是素数\n");
	}
	
	return 0;
}
