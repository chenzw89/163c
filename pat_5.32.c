#include <stdio.h>
#include <string.h>
#define N 500001

int main(int argc, char *argv[])
{
	char s[N];
	char *t =  NULL;
	gets(s);
	
	int i, m = strlen(s), first = 1;
	for (i=m-1; i>=0; i--) {
		if (s[i] == ' ') {
			s[i] = '\0';
		}
		else if (s[i-1] == ' ') {
			t = &s[i];
			if (first) {
				first = 0;
			} else {
				printf(" ");
			}
			printf("%s", t);
		} 
	}
	if (s[0] != '\0') {
		if (first) {
			printf("%s", s);
		} else {
			printf(" %s", s);
		}
	}
	printf("\n"); 
		
	return 0;
}
