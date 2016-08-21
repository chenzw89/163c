#include <stdio.h>

int main(void)
{
	int a[4] = {0}; //four numbers in a array
	int b[24] = {0}; //all numbers to be printed out
	int forword = 0; //mark of array b
	int r, s, t;
		 
    scanf("%d", a);
    for (int i=1; i<4; i++) {
    	a[i] = a[0] + i;
	}
		
	for (r=0; r<4; r++) {
		for (s=0; s<4; s++) {
			if (s!=r) {
				for (t=0; t<4; t++){
					if (t!=r&&t!=s) {
						b[forword] = a[r]*100 + a[s]*10 + a[t];
						forword++;
					}
				}
			}
		}
	}
	
	for (int i=0; i<24; i++) {
		if ((i+1)%6) printf("%d ", b[i]);
		else printf("%d\n", b[i]);
	}
    
    return 0;
}
