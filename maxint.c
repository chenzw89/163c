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
	printf("int��������������ǣ�%d\n",c);
	printf("unsigned int��������������ǣ�%u\n", a);
	
	++b;
	++d;
	while (c/=10) {
		d++;
	}
	while (a=a/10) {
		b++;
	}
	printf("int���������������λ���ǣ�%d\n", d);
	printf("unsigned int����������������λ���ǣ�%d\n", b);

	return 0;
}
