#include <stdio.h>

int main(void)
{
	int a, b;
	int t;
	
	scanf("%d %d", &a, &b);
//	int original_a = a;
//	int original_b = b;
	
	while ( b!= 0) {
		t = a % b;
		a = b;
		b = t;
	}
	
	printf("���Լ����%d��\n", a);
	
	return 0;
}
