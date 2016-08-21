#include <stdio.h>

int main(void)
{
	int n, u, d;
	int time = 0;
	
	scanf("%d %d %d", &n, &u, &d);
	while (u<n) {
		time += 2;
		n -= u - d;
	}
	printf("%d\n", time+1);
	
	return 0;
}
