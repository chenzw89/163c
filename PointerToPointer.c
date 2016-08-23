#include <stdio.h>

int main(int argc, char *argv[])
{
    char *name[] = {"Book", "Cell Phone", "Table", "Program", "Computer"};
    char **p;
    
    for (int i=0; i<5; i++) {
        p = name + i;
        printf("%s\n", *p);    
    }

    return 0;
}
