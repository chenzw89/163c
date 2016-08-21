#include <stdio.h>

int main(void)
{
	int x, y, n;
	int has_root = 0;
	x = y = 0;
	
	scanf("%d", &n);
	for (x=1; x*x<n; x++) {
		for (y=x; y*y<n; y++) {
			if (x*x+y*y==n) {
				printf("%d %d\n", x, y);
				has_root = 1;
			}
		}
	}
	if (!has_root) printf("No Solution\n");
	
	return 0;
}
