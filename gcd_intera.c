#include <stdio.h>

int main(void)
{
	int a, b, x;
	int min;
	int gcd = 1;
	a = 12; b = 18;
	
//	scanf("%d %d", &a, &b);
	
	if (a>b) {
		min = b;
	} else {
		min = a;
	}
	
	for ( x=1; x<=min; x++ ) {
		if (a%x == 0) {
			if (b%x == 0) {
				gcd = x;
			}
		}
	}
	
	printf("%d和%d的最大公约数是%d。\n", a, b, gcd);
	
	return 0;
}
