#include <stdio.h>

int main(void)
{
	const int maxNumber = 100;
	int a[maxNumber];
	int b[maxNumber];
	int c[maxNumber];
	int i, j, k, p;
	i = j = k = p = 0;
		
	for (i=0; i<maxNumber; i++) a[i] = b[i] = c[i] = 0;
	do {
		scanf("%d", &j);
		scanf("%d", &a[j]);
	} while(j);
	do {
		scanf("%d", &k);
		scanf("%d", &b[k]);
	} while(k);
	for (i=0; i<maxNumber; i++) {
		if (a[i] || b[i]) {
			c[i] = a[i] + b[i];
		}
	}
	
	for (i=maxNumber-1; i>=0; i--) {
		if (i>1 && c[i]) {
			p = 1;
			if (c[i]==1) {
				printf("%d", i);
			} else {
				printf("%d%c%d", c[i], 'x', i);
			}
			for (int m=i-1; m>=0; m--) {
				if (c[m]>0) {
					printf("%c", '+');
					break;
				} else if (c[m]<0) {
					break;
				}
			}
		}
		else if (i==1 && c[i]) {
			p = 1;
			if (c[i]==1) {
				printf("%c", 'x');
			} else {
				printf("%d%c", c[i], 'x');
			}
			if (c[0]>0) {
				printf("%c", '+');
			} 
		} 
		else if (i==0) {
			if (p) {
				if (c[i]) printf("%d\n", c[i]);
				else printf("\n");
			} else {
				printf("%d\n", c[i]);
			}
		}
	}
			
	return 0;
}
