#include <stdio.h>

int main(void)
{
	int a[10];
    int i;
    printf("������ռ�ֽڣ�%d\n",sizeof(int));
    for(i=0; i<10; i++) {
        printf("%d\t%p\n",&a[i],&a[i]);
    }
	
	return 0;
}
