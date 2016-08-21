#include <stdio.h>

struct test {
		int var1;
		int var2;
		int var3;
		int var4;
	} tt;
	
struct test2 {
	int var1;
	int var2;
	char var3;
	char var4;
	double var5;
	double var6;
} tt2;

int main(int argc, char const *argv[])
{
	//struct of same var type.
	printf("size of tt = %d\n", sizeof(tt));
	printf("&tt.var1 = %p\n", &tt.var1);
	printf("&tt.var2 = %p\n", &tt.var2);
	printf("&tt.var3 = %p\n", &tt.var3);
	printf("&tt.var4 = %p\n", &tt.var4);
	
	//struct of different var type.
	printf("size of tt2 = %d\n", sizeof(tt2));
	printf("&tt2.var1 = %p\n", &tt2.var1);
	printf("&tt2.var2 = %p\n", &tt2.var2);
	printf("&tt2.var3 = %p\n", &tt2.var3);
	printf("&tt2.var4 = %p\n", &tt2.var4);
	printf("&tt2.var5 = %p\n", &tt2.var5);
	printf("&tt2.var6 = %p\n", &tt2.var6);
	
	return 0;
}
