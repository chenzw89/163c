#include <stdio.h>
#include <math.h>

int main(void)
{
    double a0, a1, a2, a3; //4 factors
    double c, d; //distance c d
    a0 = a1 = a2 = a3 = c = d = 0.0;
//    a0 = 1;
//    a1 = -3;
//    a2 = -1;
//    a3 = 3;
//    c = -0.5;
//    d = 0.5;
    
    scanf("%lf %lf %lf %lf", &a3, &a2, &a1, &a0);
    scanf("%lf %lf", &c, &d);
    
    while (1) {
    	double dist = fabs(c-d);
	    if (dist<=0.01) {
			printf("%.2f\n", (c+d)/2); 
			break;
		}
		else {
			double e = (c+d) / 2;
			double i = a3*pow(c,3) + a2*pow(c,2) + a1*c + a0;
			double j = a3*pow(d,3) + a2*pow(d,2) + a1*d + a0;
			double k = a3*pow(e,3) + a2*pow(e,2) + a1*e + a0;
			
			if (k==0) {
				printf("%.2f\n", (c+d)/2);
				break;
			}
			else {
				if ((i*k)>0) {
					c = (c+d) / 2;
				}
				if ((j*k)>0) {
					d = (c+d) / 2;
				}
			}	
		}
	}
    
    return 0;
}
