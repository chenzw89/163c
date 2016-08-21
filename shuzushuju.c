#include <stdio.h>

int main(void)
{
	int a[10];
    int i;
    printf("整形所占字节：%d\n",sizeof(int));
    for(i=0; i<10; i++) {
        printf("%d\t%p\n",&a[i],&a[i]);
    }
	
	return 0;
}
