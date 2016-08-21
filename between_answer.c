#include <stdio.h>

int main(void)
{
	int a3, a2, a1, a0;
	double a, b, c, f, f1, f2, f3;
	double r = 0;
//	f = a3*r*r*r + a2*r*r + a1*r + a0;
	f1 = a3*a*a*a + a2*a*a + a1*a + a0;
	f2 = a3*b*b*b + a2*b*b + a1*b + a0;
	f3 = a3*c*c*c + a2*c*c + a1*c + a0;
	 
	scanf("%d %d %d %d", &a3, &a2, &a1, &a0);
	scanf("%lf %lf", &a, &b);
	if (f1==0) r = a;
	else if (f2==0) r = b;
	else {
		while (f1*f2<0) {
			c = (a + b) / 2.0;
			if (f3==0) r = c;
			else if (f1*f3>0) {
				a = c;
//				continue;
			}
			else if (f2*f3>0) {
				b = c;
//				continue;
			}
		}	
	}
	printf("%.2f\n", r);	
	
	return 0;
}
