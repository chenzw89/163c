#include <stdio.h>

int main(void)
{
	int a, b, i;
	int cnt = 0;
	int sum = 0;
	
	scanf("%d %d", &a, &b);
	for (i=a; i<=b; i++) {
		printf("%5d", i);
		sum += i;
		++cnt;
		if (!(cnt%5)) printf("\n");
	}
//	printf("\n%d\n", cnt);
	if (cnt%5) printf("\n");
	printf("Sum = %d\n", sum);
	
	return 0;
}
