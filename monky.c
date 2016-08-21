#include <stdio.h>

int main(void)
{
    int N = 0;    //given monky amount
    scanf("%d", &N);

    int monky[N];	//monky circle
    for (int i=0; i<N; i++) {
        monky[i] = 1;
    }
    
    int total = N;	//monky available count
    int pos = 0;	//current position, one step by one 
    int cnt = 0;	//count
	while (total>1) {
		if(monky[pos]) {
			cnt++;
			if(!(cnt%3)) {
				monky[pos] = 0;
				total--;
			}
		}
		pos++;
		if (pos/N) pos = 0;
	}
	
//	printf("%d\n", cnt);
	for (int i=0; i<N; i++) {
		if (monky[i]) {
			printf("%d\n", i+1);
			break;
		}
	}
    
    return 0;
}
