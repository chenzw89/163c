#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, j, k;
    static char *str[4] = {"Program", "C", "Fortran", "Basic"};
    char *temp;

    for (i=0; i<4; i++) {
        for (j = i+1; j<4; j++){
            if (strcmp(str[i], str[j]) > 0) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    
    }
    for (i=0; i<4; i++) printf("%s\n", str[i]);

    return 0;
}
