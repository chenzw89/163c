#include <stdio.h>

int main(void)
{
	int input;
	int odd, even;
	
	odd = even = 0;
	scanf("%d", &input);
	while (input != -1) {
		if (input % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
		scanf("%d", &input);
	}
	printf("%d %d\n", odd, even);
	
	return 0;
}
