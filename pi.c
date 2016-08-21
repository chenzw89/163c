#include <stdio.h>

int main(void)
{
	double input, output, last;
	double a, b;
	int n = 1;
	output = last = a = b= 1.0;
	
	scanf("%lf", &input);	
	while (last>=input) {
		a = a * n;
		b = b * (2 * n + 1);
		last = a / b;
		output += last;
		n++;
//		printf("%lf ", last);
	}
	printf("%.6f\n", 2 * output);
	
	return 0;
}
