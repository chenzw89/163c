#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#define N 1000

int main(int argc, char *argv[])
{
	char s[N];
	scanf("%s", s);
	
	char *out[] = {"ling", "yi", "er", "san", "si", \
					"wu", "liu", "qi", "ba", "jiu"};
	
	int i, j = strlen(s), sum = 0;
	for (i=0; i<j; i++) {
		sum += (int)s[i];
	}
	
	char *sum_c = (char *)malloc(strlen((char)(*sum))+1);
	strcpy(sum_c, (char)sum);
	for (i=0; i<strlen(sum_c)-1; i++) {
		printf("%s ", out[(int)sum_c[i]]);
	}
	printf("%s\n", out[(int)sum_c[i]]);
	
	return 0;
}
