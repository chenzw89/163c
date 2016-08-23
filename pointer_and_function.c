#include <stdio.h>

float *search(float(*pointer)[4], int n);

int main(int argc, char *argv[])
{
    int i, number = 0;
    float *p;
    float score[3][4] = {
            {60, 70, 80, 90},
            {56, 89, 67, 88},
            {34, 78, 90, 66}};

    printf("Enter the number of studer:");
    scanf("%d", &number);
    printf("The score of No.%d are:\n", number);

    p = search(score, number);

    for (i=0; i<4; i++) 
        printf("%5.1f\n", *(p+i));
    
    return 0;
}

float *search(float(*pointer)[4], int n) {

    float *pt;
    pt = *(pointer + n);

    return pt;
}
