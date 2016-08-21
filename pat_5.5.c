#include <stdio.h>

struct pro{
	char name[12];
	double area;
	double pop;	
};

void printline(void);
void printprovince(struct pro);

int main(int argc, char *argv[])
{
	struct pro province[5] = {
		{"Anhui", 139600.0, 6461.0},
		{"Beijing", 16410.54, 1180.7},
		{"Chongqing", 82400.0, 3144.23},
		{"Shanghai", 6340.5, 1360.26},
		{"Zhejiang", 101800.0, 4894.0},
	};
	
	printline();
	printf("%-12s%11s%12s\n", "Province", "Area(km2)", "Pop.(10K)");
	printline();
	for (int i=0; i<5; i++) {
		printprovince(province[i]);
	}
	printline();
	
	return 0;
}

void printline(void) {
	for (int i=0; i<36; i++) {
		printf("-");
	}
	printf("\n");
}

void printprovince(struct pro province) {
	printf("%-12s%11.2f%10.2f\n", \
		province.name, province.area, province.pop);
}

/*
------------------------------------
Province      Area(km2)   Pop.(10K)
------------------------------------
Anhui         139600.00   6461.00
Beijing        16410.54   1180.70
Chongqing      82400.00   3144.23
Shanghai        6340.50   1360.26
Zhejiang      101800.00   4894.00
------------------------------------
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

/*
-                      -           -
*/

/*
-------------------------------------
Province      Area(km2)   Pop.(10K)
-------------------------------------
Anhui         139600.00   6461.00
Beijing        16410.54   1180.70
Chongqing      82400.00   3144.23
Shanghai        6340.50   1360.26
Zhejiang      101800.00   4894.00
-------------------------------------
*/
