#include <stdio.h>

int isPrime(int n);	//函数申明

int main(void)
{
	int n;
	
	scanf("%d", &n);
	printf("%d=", n);	
	while (!isPrime(n)) { //如果n仍然不是素数 
		//那么就分解n并让n减小一级，同时把此时n的第一个因子打印出来 
		int i = 0;
		for (i=2; i<=n/2; i++) {
			if (n%i==0) {
				n /= i;
				printf("%dx", i);
				break;
			}
		}
	}
	printf("%d\n", n);
	
	return 0;
}

int isPrime(int n)
{
	int k = 1;
	
	for (int i=2; i<n; i++) {
		if (n%i==0) {
			k = 0; 
			break;
		}
	}
	
	return k;
}
