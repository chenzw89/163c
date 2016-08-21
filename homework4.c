#include <stdio.h>

int main(void)
{
	int m, n;
	int sum = 2;
//	scanf("%d %d", &n, &m);
	
	int count = 1;
	int x;
	m = 4; n = 2;
	for ( x=2; count<=m; x++ ) {
		int i;
		int isPrime = 1;
		for ( i=2; i<x; i++) {
			if ( x%i == 0) {
				isPrime = 0;
				break;
			}
		if (isPrime == 1) {
			count += 1;
			if ( count>=n ) {
				sum += x;
			}
			break;				
		}
		}		
	}
	
	printf("%d\n", sum);
	
	return 0;
}
