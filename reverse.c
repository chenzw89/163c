#include <stdio.h>

int main(void)
{
	int input, output;
	int a, b, c;
	input = output = 0;
	
	//printf("������һ��3λ��������");
	scanf("%d", &input);
	
	a = input / 100;
	b = (input % 100) / 10;
	c =  input % 10;
	output = c * 100 + b * 10 + a;
	
	printf("%d", output);
	
	return 0;
}
