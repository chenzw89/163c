#include <stdio.h>

int main(void)
{
	int y, f, n;
	int has_result = 0;
	
	scanf("%d", &n);
//	100*f + y - n = 200*y + 2*f
	for (f=1; f<100; f++) {
		if ((98*f-n)%199==0) {
			y = (98*f-n) / 199;
			printf("%d.%d\n", y, f);
			has_result = 1;
			break;
		}
	}
	if (!has_result) {
		printf("No Solution\n");
	}
		
	return 0;
}
