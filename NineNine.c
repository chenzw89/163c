#include <stdio.h>

int main(void)
{
	int i, j, n;
	
	scanf("%d", &n);
	for (i=1; i<=n; i++) {
		for (j=1; j<=i; j++) {
			printf("%d*%d=%-4d", j, i, i*j);
//			if (i==j) printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}
