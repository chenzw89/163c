#include <stdio.h>
#include <stdio.h>

int isPrime(int x);

int main(void)
{
	int x;
	scanf("%d", &x);
	if (isPrime(x)) {
		printf("%d是素数。\n", x);
	} else {
		printf("%d不是素数。\n", x);
	}
	
	return 0;
}

int isPrime(int x) {
	int is_prime = 1;
	if (x==1) is_prime = 0;
	for (int i=2; i<=sqrt(x); i++) {
		if (!(x%i)) {
			is_prime = 0;
			break;
		} 
	}

	return is_prime;
}
