#include <stdio.h>

int main(void)
{
	int sum = 0;
	int count = 0;
	int number;
	
	scanf("%d", &number);
	while (number != -1) {
		sum += number;
		count ++;
		scanf("%d", &number);
		printf("Your input is %d, and sum equals to %d\n", number, sum);
	}
	
	double dsum = sum;
	printf("The average is %f\n.", dsum/count);
	
	return 0;
}
