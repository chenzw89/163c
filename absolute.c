#include <stdio.h>

int main(void)
{
	int x, i;
	int isPrime = 1; //����x������ 
	
	scanf("%d", &x);
	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			isPrime = 0;
			break; 
		}
	}
	if (isPrime ==1) {
		printf("������\n");
	} else {
		printf("��������\n");
	}
	
	return 0;
}
