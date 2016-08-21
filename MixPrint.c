#include <stdio.h>

int main(void)
{
    int i = 0;
    double f1, f2;
    char c = '0';
    f1 = f2 = 0.0;
    
    scanf("%lf %d %c %lf", &f1, &i, &c, &f2);
    printf("%c %d %.2f %.2f\n", c, i, f1, f2);
    
    return 0;
}
