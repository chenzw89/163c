#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 101

int main(int argv, char const *argc[])
{
	char s[MAX];
	int n = 0, i = 0;
	char *p, *q;
	
	gets(s);
	scanf("%d", &n);
	n %= strlen(s); //if n>strlen(s), get the remainder
	p = s+n;
	q = (char *)malloc((int)MAX);
	strcpy(q, p); //string right to p;
	*p = '\0'; //let s equals to string left to p;
	strcat(q, s);
	printf("%s\n", q);
	i++;
	    
    return 0;
}
