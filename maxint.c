#include <stdio.h>

int main(void)
{
	int c = 0, d = 0;
	unsigned int a = 0, b = 0;
	while ((c+1)>0) {
		c++;
	}
	while (a+1) {
		a++;
	}
	printf("int数据类型最大数是：%d\n",c);
	printf("unsigned int数据类型最大数是：%u\n", a);
	
	++b;
	++d;
	while (c/=10) {
		d++;
	}
	while (a=a/10) {
		b++;
	}
	printf("int数据类型最大数的位数是：%d\n", d);
	printf("unsigned int数据类型最大的数的位数是：%d\n", b);

	return 0;
}
