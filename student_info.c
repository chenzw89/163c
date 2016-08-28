#include <stdio.h>
#define STNUM 5

struct stuinf {
    int stid;
    int score;
} stu[STNUM];

int main(int argc, char *argv[])
{
    struct sruinf *p[STNUM], *ptemp; int i, j, k, sum = 0; 
    for (i=0; i<STNUM; i++) {
        scanf("%d%d", &stu[i].stid, &stu[i].score);
        p[i] = &stu[i];
        sum += stu[i].score;
    }
    for (i=0; i<STNUM; i++) {
        k = i;
        for (j=i; j<STNUM-1; j++) {
            if (p[k]->score < p[j]->score) 
                k = j;
            if (k != i) {
                ptemp = p[i];
                p[i] = p[k];
                p[k] = ptemp;
            }
        }
    }
    for (i=0; i<STNUM; i++) {
        printf("%d, %d\n", p[i]->stid, p[i]->score);
        printf("average score = %d\n", sum / STNUM);
    }
        
    return 0;
}
