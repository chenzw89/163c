#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;
				
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

/* 你的代码将被嵌在这里 */
int IsTheNumber (const int N) {
	int sqr = sqrt(N);	//sqrt of N
	int rst = 0;
	int temp = N;
	
	if(N==pow(sqr,2)) {
		int digit[10] = {0};	//0~9 digit in the array
		while (temp) {
			digit[temp%10]++;
			for (int i=0; i<10; i++) {
				if (digit[i]==2) {
					rst = 1;
					break;
				}
			}
			temp /= 10;
			
		}
	} 
	
	return rst;
}
