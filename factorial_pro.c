#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;
				
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* 你的代码将被嵌在这里 */
void Print_Factorial(const int N) {
	if (N<0) printf("Invalid input\n");
	else {
		//let's say the result no more than 1000 digits
		int max_digit = 3000;
		//current digits of result
		int cnt = 1;
		int fac = 2;	//factor number from 2 to N

		//put every digit of result into the array
		int rst[max_digit];
		rst[0] = 1;		
		for (int i=1; i<max_digit; i++) rst[i] = 0;
		
		for (; fac<=N; fac++) {
			for (int i=0; i<cnt; i++) {
				rst[i] *= fac;
			}
			for (int j=0; j<cnt; j++) {
				if (rst[j]>9) {
					rst[j+1] += rst[j] / 10;
					rst[j] %= 10;
					if (j==cnt-1) cnt++;
				}
			}
		}
		
		for (int i=cnt-1; i>0; i--) {
			printf("%d", rst[i]);
		}
		printf("%d\n", rst[0]);
	}
}
