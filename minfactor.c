#include <stdio.h>

int main(void)
{
	int a, b;
	int fac;
	int min;
//	fac = min = 1;
	
	scanf("%d/%d", &a, &b);
	min = a<b?a:b;
	fac = 2;
	while (fac<=min) {
		if (a%fac==0 && b%fac==0) {
			a /= fac;
			b /= fac;
			min = a<b?a:b;
			continue;
		}
		else fac++;
	}
	printf("%d/%d\n", a, b);
	
	return 0;
}
