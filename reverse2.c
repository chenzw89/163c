#include <stdio.h>

int main(void)
{
	int a, b, c;
	int in, out;
	
	scanf("%d", &in);
	a = in / 100;
	b = (in % 100) / 10;
	c = in % 10;
	out = c * 100 + b * 10 + a;
	printf("%d\n", out);
	
	return 0;	
}
