#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, time = 0;
	
	scanf("%d", &n);
	while (n!=1) {
		if (n%2) {
			n = (3 * n + 1) / 2;
		} else {
			n /= 2;
		}
		time++;
	}
	printf("%d\n", time);
}
