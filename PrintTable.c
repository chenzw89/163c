/* print out the table as the exactly same.
------------------------------------
Province      Area(km2)   Pop.(10K)
------------------------------------
Anhui         139600.00   6461.00
Beijing        16410.54   1180.70
Chongqing      82400.00   3144.23
Shanghai        6340.50   1360.26
Zhejiang      101800.00   4894.00
------------------------------------
*/

#include <stdio.h>

void PrintLine(void);

int main(void)
{
    
    
    return 0;
}

void PrintLine(void) {
	for (int i=0; i<37; i++) {
		printf("%c", '-');
	}
	printf("\n");
}
