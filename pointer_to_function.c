#include <stdio.h>

int max(int *p) {
    
    int i, t = *p;

    for (i = 0; i < 10; i++) {
        if (*(p + i) > t) 
            t = *(p + i);
    }

    return t;
}

int main(int argc, char *argv[])
{
    int i, m, a[10];
    int (*pf)(int a[]);

    for (i = 0; i < 10; i++) 
        scanf("%d", &a[i]);
    pf = &max;
    m = (*pf)(a);
    printf("max = %d\n", m);

    return 0;
}
