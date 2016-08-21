#include <stdio.h>
#include <math.h>

void readout(int);

int main(void)
{
	int in;
	int c[10] = {0};
	int i = 0, j;
//	int mask = 1;
	
	scanf("%d", &in);
	//input<0, first printout "fu"
	if (in<0) {
        in = -in;
        printf("fu ");
    }
    //input is one digit
    if (in<10) {
    	c[i] = in;
    	readout(c[i]);
	}
	//input more than one digit
	else {
		while (in) {
			c[i] = in % 10;
			in /= 10;
			i++;
		}
		for (j=i-1; j>=0; j--) {
			if (j==i-1){
				readout(c[j]);
			} else {
				printf(" ");
				readout(c[j]);
			}
			
		}
	}
//	int copyin = in;
//
//	while (copyin>9) {
//		mask *= 10;
//		copyin /= 10;
//	}
//	for (; mask>0; ) {
//		i = in / mask;
////		printf("%d", i);
//		printf(" ");
//		readout(i);
//		in %= mask;
//		mask /= 10;
//	}
	
	printf("\n");
    
    return 0;    
}

void readout(int i) {
	switch (i) {
		case 0: printf("ling"); break;
		case 1: printf("yi"); break;
		case 2: printf("er"); break;
		case 3: printf("san"); break;
		case 4: printf("si"); break;
		case 5: printf("wu"); break;
		case 6: printf("liu"); break;
		case 7: printf("qi"); break;
		case 8: printf("ba"); break;
		case 9: printf("jiu"); break;
	}
}
