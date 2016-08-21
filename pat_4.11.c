#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
ElementType Median(ElementType A[], int N) {
	
	ElementType mid = 0, temp;
	int i, j;
	
	for (i=0; i<N; i++) {
		int cnt = 0;
		for (j=0; j<N-i-1; j++) {
			if (A[j]>A[j+1]) {
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
				cnt++;
			}
		}
		if (!cnt) break;
	}
	mid = A[(int)(N/2)];
	
	return mid;
} 
