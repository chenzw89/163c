#include <stdio.h>

int main(void)
{
	int x;
	int ret = 0;
	
	scanf("%d", &x);
	int t = x;
	
	while (x > 1) {
		x /= 2;
		ret++;
	}
	printf("%dµÄlog2µÈÓÚ%d¡£\n", t, ret);
	
	return 0;
}
